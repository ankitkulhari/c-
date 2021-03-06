#include<iostream>
using namespace std;
struct lnode 
{
	int data;
	struct lnode *next;
};
typedef struct lnode *lptr;
lptr  L1,L2,L3,L4,result,intersection;
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
void print(lptr L)
{
	while(L->next!=NULL)
	{
		cout<<L->data<<" ";
		L=L->next;
	}
	cout<<L->data<<"\n";
}

lptr inter(lptr &m,lptr &n)
{	
	lptr result=NULL;
	lptr t=m;
	while(t!=NULL)
	{      
		if(!search(n,t->data))
		{
		t=t->next;
	    }
	    else
	    {
	    	addend(result,t->data);
	    	t=t->next;
		}
	}

	return result;
}

int main()
{
	int a,b,c;
	cout<<"enter the no. of elements in L1\n";
	cin>>a;
	cout<<"enter the elements of L1\n";
	for(int i=0;i<a;i++)
	{
		cin>>b;
		addend(L1,b);
	}
	cout<<"enter the no. of elements in L2\n";
	cin>>c;
	cout<<"enter the elements of L2\n";
	for(int i=0;i<c;i++)
	{
		cin>>b;
		addend(L2,b);
	}
//	cout<<"unoin of L1 and L2 is:\n";
//	unione=u(L1,L2);
//	print(unione);
	cout<<"intersection of L1 and L2 is:\n";
	intersection=inter(L1,L2);
	print(intersection);
	return 0;
}

	
	
	
	

