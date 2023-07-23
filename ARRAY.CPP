#include<iostream.h>
#include<conio.h>
#include<process.h>
class demo
{
	int a[10],i,j,k,n,item;
public:
	void get();
	void insert();
	void del();
	void dis();
};
void demo::get()
{
	cout<<"\nEnter n";
	cin>>n;
	cout<<"\nEnter array element";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void demo::insert()
{
	cout<<"\nEnter position:";
	cin>>k;
	cout<<"Enter item:";
	cin>>item;
	j=n;
	while(j>=k)
	{
		a[j+1]=a[j];
		j--;
	}
	a[k]=item;
	n++;
}
void demo::del()
{
	cout<<"\nEnter position";
	cin>>k;
	j=k;
	while(j<=n-1)
	{
		a[j]=a[j+1];
		j++;
	}
	n--;
}
void demo::dis()
{
	cout<<"\n Element are\n";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	demo d;
	int ch;
	d.get();
	cout<<"\n1.Insert 2.del 3.dis 4.Exit\n";
	while(ch!=4)
	{
		cout<<"\nEnter choice";
		cin>>ch;
		switch(ch)
		{

			case 1: d.insert();break;
			case 2: d.del();break;
			case 3: d.dis();break;
			case 4: exit(0);
		}
	}
	getch();
}







