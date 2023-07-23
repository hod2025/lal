#include<iostream.h>
#include<conio.h>
class matrix
{
	int a[5][5],b[5][5],c[5][5],d[5][5];
	int p,q,i,j,k,n,m;
public:
	void get();
	void add();
	void sub();
	void mul();
};
void matrix::get()
{
	cout<<"\n enter number of row and column:\n";
	cin>>n>>m;
	cout<<"\n enter the first matrix:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>a[i][j];
	}
	cout<<"\n enter number of row and cloumn:\t";
	cin>>p>>q;

	cout<<"\n enter the second matrix:\n";

	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		cin>>b[i][j];
	}
}
void matrix::add()
{
	cout<<"\n the adition of two matrix is :\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void matrix::sub()
{
	cout<<"\n the subtraction of two matrix is:\n";
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
			cout<<d[i][j]<<"\n";
		}
		cout<<"\n";
	}
}
void matrix::mul()
{
	cout<<"\n the matrix multiplication is :\n";
	if(m==p)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<q;i++)
			{
				c[i][j]=0;
				for(k=0;k<p;k++);
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
				cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	else
	cout<<"\nMatrix multiplication not possible";
}
void main()
{
clrscr();
matrix m;
m.get();
m.add();
m.mul();
getch();
}