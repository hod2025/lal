#include<iostream.h>
#include<conio.h>
#include<process.h>
int n;
class stack
{
private:
	int s[10],top,ele,i;
public:
	stack()
	{
	top=-1;
	}
	void push();
	void dis();
	void pop();
	void peep();
	void change();
};
void stack::push()
{
	if(top>=n-1)
	cout<<"\nStack is overflow:";
	else
	{
	cout<<"\nEnter element:";
	cin>>ele;
	top++;
	s[top]=ele;
	}
}

void stack::dis()
{
	if(top==-1)
	{
	 cout<<"\n Stack is Empty";
	}
	else
	{
	cout<<"\nElements in stack are:\n";
	for(i=top;i>=0;i--)
	cout<<s[i]<<"\t";
	}
}
void stack::pop()
{
	if(top==-1)
	{
		cout<<"\n Underflow";
	}
	else
	{
		cout<<"\n pop ele is:"<<s[top];
		top--;
	}
}

void stack::peep()
{
	cout<<"\nEnter position:";
	cin>>i;
	if((top-i+1)<0)
	{
		cout<<"\nUnderflow";
	}
	else
	{
	cout<<"\nPeep ele is "<<s[top-i+1];
	}
}

void stack::change()
{
	cout<<"\nEnter position "; cin>>i;
	if((top-i+1)<0)
	{
		cout<<"\nUnderFlow:";
	}
	else
	{
	cout<<"\nPeep ele is:"<<s[top-i+1];
	}
}

void main()
{
	clrscr();
	stack s;
	cout<<"Enter size of stack";
	cin>>n;
	int ch;
	cout<<"\n1. Push 2.Display 3.Pop 4.Peep 5.Change 6.Exit\n";
	while(ch!=6)
	{
		cout<<"\nEnter ch :"; cin>>ch;
		switch(ch)
		{
		case 1: s.push(); break;
		case 2: s.dis(); break;
		case 3: s.pop();break;
		case 4: s.peep(); break;
		case 5: s.change(); break;
		case 6: exit(0);
		}
	}
	getch();
}
