#include<iostream.h>
#include<conio.h>
class path
{
	int a[5][5],i,j,k,n,s,d;
public:
	void insert();
	void display();
};
void path::insert()
{
	cout<<"\nEnter the no. of vertices";
	cin>>n;
	cout<<"\nEnter the matrix:";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
	cin>>a[i][j];
	if(a[i][j]==-1)
	a[i][j]=9999;
	}

	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	for(k=1;k<=n;k++)
	if(a[i][j]<(a[i][k]+a[k][j]))
	a[i][j]=a[i][j];
	else
	a[i][j]=(a[i][k]+a[k][j]);
}

void path::display()
{
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	cout<<"\t"<<a[i][j];
	cout<<"\n";
	}
	cout<<"\nEnter the source vertex:";
	cin>>s;
	cout<<"\nEnter the destination vertex:";
	cin>>d;
	cout<<"\nPath from Source "<<s<<" to destination "<<d<<" is ";
	cout<<a[s][d];
}

void main()
{
	clrscr();
	path p;
	p.insert();
	cout<<"\n Shortest path is \n";
	p.display();
	getch();

}

