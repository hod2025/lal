#include<conio.h>
#include<iostream.h>
#include<process.h>
class queue
{
	int info, ele,c;
	queue *node,*link,*start,*move;
public:
	queue()
	{
	start=NULL; c=0;
	}
	void insert();
	void del();
	void dis();
};

void queue::insert()
{
	node=new queue;
	if(c<3)
	{
		cout<<"\nEnter Info:"; cin>>ele;
		node->info=ele;
		node->link=NULL;
		if(start==NULL)
		{
			start=node;
			c++;
			return;
		}
		else
		{
			move=start;
			while(move->link!=NULL)
			move=move->link;
			move->link=node;
			c++;
		}
	}
	else
	cout<<"\n Overflow";
}
void queue::del()
{
	move=start;
	if(move!=NULL)
	{
		move=move->link;
		cout<<"\nDeleted Element is:"<<start->info;
		start=move;
	}
	else
	cout<<"\nUnderflow:";
}
void queue::dis()
{
	move=start;
	if(move==NULL)
	{
		cout<<"\n Queue is empty";
		return;
	}
	else
	{
		while(move!=NULL)
		{
			cout<<move->info<<"\t";
			move=move->link;
		}
	}
}
void main()
{
	clrscr();
	int ch;
	queue s;
	cout<<"\n1.Insert 2.Show 3.Delete 4.Exit";
	while(ch!=4)
	{
		cout<<"\nEnter Choice";
		cin>>ch;
		switch(ch)
		{
			case 1:s.insert();break;
			case 2:s.dis();break;
			case 3:s.del();break;
			case 4:exit(0);
		}
	}
	getch();
}
