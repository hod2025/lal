#include<iostream.h>
#include<conio.h>

class mat
{
 int a[5][5],b[5][5],c[5][5],n,m,i,j,p,q,k;
public:
  void get();
  void add();
  void sub();
  void mul();
  void trans();
};

void mat :: get()
{
 cout<<"Enter Row And column:\n";
 cin>>n>>m;
 cout<<"Enter matrix first:\n";
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  cin>>a[i][j];
 }
 cout<<"enter matrix second:\n";
 for(int p=0;p<n;p++)
 {
  for(int q=0;q<m;q++)
  cin>>b[p][q];
 }

 cout<<"matrix first is:\n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
   cout<<a[i][j]<<" ";
   cout<<endl;
  }
  cout<<"matrix second is:\n";
 for(p=0;p<n;p++)
 {
  for(q=0;q<m;q++)
   cout<<b[p][q]<<" ";
   cout<<endl;
  }
}

void mat :: add()
{
  cout<<"Addition \n";
  for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   cout<<a[i][j]+b[i][j]<<" ";
  }
  cout<<endl;
 }
}

void mat :: sub()
{
  cout<<"Subtraction \n";
  for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
   cout<<a[i][j]-b[i][j]<<" ";
  }
  cout<<endl;
 }
}

void mat :: mul()
{
 if(n==m){
	  cout<<"Multiplication \n";
	  for(i=0;i<n;i++)
	  {
	    for(j=0;j<m;j++)
	    {
	      c[i][j]=0;
	      for(k=0;k<m;k++)
	      {
		c[i][j] += a[i][k]*b[k][j];
	      }
	      cout<<c[i][j]<<" ";
	    }
	    cout<<endl;
	  }
 }
 else{
 cout<<"Multiplication not possible.";
 }
}

void mat :: trans()
{
 cout<<"\nTranspose Mat:\n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   c[i][j]=a[j][i];
   cout<<c[i][j]<<" ";
  }
  cout<<endl;
 }
}

void main()
{
 clrscr();
 mat m;
 m.get();
 m.add();
 m.sub();
 m.mul();
 m.trans();
 getch();
}



