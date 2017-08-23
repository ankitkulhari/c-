#include<iostream>
using namespace std;
struct lnode 
{
	int data;
	struct lnode *next;
};
typedef struct lnode *lptr;
lptr  L;
void addend(lptr &L,int k)
{	
	if(L==NULL)
	{
	    L=new(lnode);
		L->data=k;
		L->next=NULL;
	}
	else
	{	lptr T=L;
		while(T->next!=NULL)
  		{
			T=T->next;
		}
		T->next = new lnode;
		T->next->data=k;
		T->next->next=NULL;	
	}
	
}

int  search(lptr &L,int k)
{		
		if(L==NULL)
		{
			return 0;
		}
		else
		{   
			if(L->data==k)
			return 1+search( L->next,k);
			else
			return search(L->next,k);
		}
		
}

void  deletefront(lptr &L)
{
	if(L==NULL)
	{
		cout<<"element can not be deleted\n";
	}
	else
	{
		lptr T=new(lnode);
		T=L;
		L=L->next;
		delete(T);
	}
}
void addfront(lptr &L,int k)
{
	lptr T=new(lnode);
	
		T->data=k;
		T->next=L;
		L=T;
		
}
void addbefore(lptr &L,int k,int y) 
{
	if(search(L,k))
	{	
		lptr T=L;	
		if(L->data==k)
		{
			addfront(L,y);
			return;
		}
		else
		{	
		
			while(T->next->data!=k)
			{
				T=T->next;
			}
			lptr S= new(lnode);
			S->data=y;
			S->next=T->next;
			T->next=S;
		//	T->next = new lnode;
		//	T->next->data=y;
			
		}
	}
}
void deletion(lptr L,int k)
{
	if(search(L,k))
	{	
		lptr T=L;
		if(L->data==k)
		{
			
			T=T->next;
			L=T;
		}
		else
		{
			while(T->next->data!=k)
			{
				T=T->next;
			}
			T->next=T->next->next;	
		}
	}
	else
	{	
	cout<<"can not be deleted\n";
	}
}
void print(lptr L)
{
	while(L->next!=NULL)
	{
		cout<<L->data<<" ";
		L=L->next;
	}
	cout<<L->data<<"\n";
}


int main()
{

	int n,x,choice;
	while(1)
	{
		cout<<"enter\n1.to add a element in the end\n2.to add a element in the starting of linked list\n3.to search a element\n4.to print the all elements of linked list\n5.to addd a element before a particular element\n6.to delete a particular element from linked \n7.to delete front element \n8.for Exit\n";
		cin>> choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"enter the element you want to insert \n";
					cin>>x;
					addend(L,x);
					break;
				}
			case 2:
				{
					cout<<"enter the element you want to insert at beggining\n";
					cin>>x;
					addfront(L,x);
					break;
				}
			case 3:
				{
					cout<<"enter the element you want to search for\n";
					cin>>x;
					search(L,x);
					break;
				}
			case 4:
				{
					print(L);
					break;
				}
			case 5:
				{	cout<<"enter x\n";
					cin>>x;
					int y;
					cout<<"enter y\n";
					cin>>y;
					addbefore(L,x,y);
					break;
				}
			case 6:
				{	
					cout<<"enter the element to delete it\n";
					cin>>x;
					deletion(L,x);
					break;	
				}
			case 7:
				{
					deletefront(L);
				}
			case 8:
				{
					exit(1);
				}
			default:
				{
					cout<<"invalid choice enter again\n";
				}
				
		}
		system("pause");
		system("cls");
	}	
}

