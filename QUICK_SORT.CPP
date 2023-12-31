#include<iostream.h>
#include<conio.h>
#include<string.h>
class demo
{
	int x[20],temp;
	int a,n,i,j,left,right;
public:
	void get();
	void asort(int,int);
	int partition(int,int);
	void disp();
};
void demo::get()
{
	cout<<"\nEnter the array size:";
	cin>>n;
	cout<<"\nEnter the array element:";
	for(i=1;i<=n;i++)
	cin>>x[i];
	asort(1,n);
}
void demo::asort(int p,int q)
{
	if(p<q)
	{
		j=partition(p,q);
		asort(p,j-1);
		asort(j+1,q);
	}
}
int demo::partition(int lb, int ub)
{
	a=x[lb];
	left=lb+1;
	right=ub;
	do	//for Descending
	{
		while(x[left]<a)	// while(x[left]>a)
		left++;
		while(x[right]>a)	// while(x[right]<a)
		right--;
		if(left<right)
		{
			temp=x[left];
			x[left]=x[right];
			x[right]=temp;
		}
	}
	while(left<=right);
	x[lb]=x[right];
	x[right]=a;
	return(right);
}

void demo::disp()
{
	cout<<"\nThe array element are:";
	for(i=1;i<=n;i++)
	cout<<x[i]<<"\t";
}

void main()
{
	clrscr();
	demo d;
	d.get();
	cout<<"\nAfter Ascending sort";
	d.disp();
	getch();
}
