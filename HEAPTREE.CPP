#include<iostream.h>
#include<conio.h>
class heap
{
	int n,a[10],q,i,j,k,key;
public:
	void get();
	void create();
	void display();
};
void heap::get()
{
	cout<<"\nEnter Range:";
	cin>>n;
	cout<<"\nEnter the element:";
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
		while(i>1 && key>a[j]) //change Min heap while(i>1 && key<a[j])
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
void heap::display()
{
	cout<<"\nHeap Tree:";
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	clrscr();
	heap h;
	h.get();
	h.create();
	h.display();
	getch();
}
