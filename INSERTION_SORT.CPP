#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
class insert
{
	int n,a[10],temp,ptr,q,i,j,k,key;
public:
	void get();
	void sort();
	void display();
};
void insert::get()
{
	cout<<"\nEnter Range:";
	cin>>n;
	for(i=1;i<=n;i++)
	a[i]=random(1000);
	cout<<"\nElements are :";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}

void insert::sort()
{
	a[0]=-9999;
	for(i=2;i<=n;i++)
	{
		temp=a[i];
		ptr=i-1;
	while(temp<a[ptr])
	{
		a[ptr+1]=a[ptr];
		 ptr--;
	}
	a[ptr+1]=temp;
	}
}

void insert::display()
{
	cout<<"\nSorted Element using Insertion Sort:";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}

void main()
{
	clrscr();
	insert h;
	h.get();
	h.sort();
	h.display();
	getch();
}

