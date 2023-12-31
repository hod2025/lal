#include<iostream.h>
#include<conio.h>
class heap
{
	int n,a[10],q,i,j,k,key,temp;
public:
	void get();
	void create();
	void sort();
	void display();
};
void heap::get()
{
	cout<<"\Enter range:";
	cin>>n;
	cout<<"\nEnter the elements\n";
	for(i=1;i<=n;i++)
	cin>>a[i];
}
void heap::create()
{
	for(q=2;q<=n;q++)
	{
		i=q;
		key=a[q];
		j=i/2;
		while(i>1 && key >a[j]) //desce order key<a[j]
		{
			a[i]=a[j];
			i=j;
			j=i/2;
			if(j<1)
			j=1;
		}
		a[i]=key;
	}
}

void heap::sort()
{
	create();
	cout<<"\nMax Heap Tree";
	display();
	for(q=n;q>=2;q--)
	{
		temp=a[1];
		a[1]=a[q];
		a[q]=temp;
		i=1;
		key=a[1];
		j=2;
		if(j+1<q)
		if(a[j+1]>a[j])
		j++;

		while(j<=q-1 && a[j]>key)
		{
			a[i]=a[j];
			i=j;
			j=i*2;
			if(j+1<q)
			if(a[j+1]>a[j])
				j++;

			else
				if(j>n)
				j=n;

			a[i]=key;
		}
	}
}
void heap::display()
{
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	heap h;
	h.get();
	h.sort();
	cout<<"\nSorted element:";
	h.display();
	getch();
}

