#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],temp;
	int i, min_index,j,n;
public:
	void get();
	void asc_sort();
	void dsc_sort();
	void disp();
};

void demo::get()
{
	cout<<"\nEnter the array size:";
	cin>>n;
	cout<<"\nEnter the array element:";
	for(i=1;i<=n;i++)
	cin>>a[i];
}

void demo::asc_sort()
{
	for(i=1;i<=n-1;i++)
	{
		min_index=i;
		for(j=i+1;j<=n;j++)
	{
		if(a[j]<a[min_index])
		min_index=j;
	}

	if(min_index!=i)
	{
		temp=a[min_index];
		a[min_index]=a[i];
		a[i]=temp;
	}
}
}
void demo::dsc_sort()
{
	for(i=1;i<=n;i++)
	{
		min_index=i;
		for(j=i+1;j<=n;j++)
		{
			if(a[j]>a[min_index])
			min_index=j;
		}
		if(min_index!=i)
		{
			temp=a[min_index];
			a[min_index]=a[i];
			a[i]=temp;
		}
	}
}

void demo::disp()
{
	cout<<"\n The array element are";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}

void main()
{
	clrscr();
	demo d;
	d.get();
	d.disp();
	d.asc_sort();
	cout<<"\nAfter ascending sort:";
	d.disp();
	d.dsc_sort();
	cout<<"\n After Descending sort:";
	d.disp();
	getch();
}

