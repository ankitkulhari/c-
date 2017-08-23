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
void print(lptr &L,int k)
{
//	lptr t=L;
//	int sum=0;
//	while(t!=NULL)
//	{
//		sum=sum+t->data;
//		t=t->next;
//	}
//	if(sum<k)
//	{
//		cout<<"there doesn't exist any subsequence whose sum is"<<" "<<k<<endl;
//	}
//	else
	
		
		while(L!=NULL)
		{
			lptr m=L;
			int s=0;
			lptr p=m;
			while(m!=NULL)
			{
				if(s==k)
				{
					break;
				}
				else if(s>k)
				{
				break;
				}
				else
				{
				s=s+m->data;
				
				}
				m=m->next;
			
			}
			if(s==k)
			{
			
				while(p!=m)
				{
					cout<<p->data<<"	";
					p=p->next;
				}
				cout<<endl;
				
			}
			
		
				L=L->next;
			
		
		}
	
 } 
int main()
{
	int a,b,c;
	cout<<"enter the no. of elements in List\n";
	cin>>a;
	cout<<"enter the elements of List\n";
	for(int i=0;i<a;i++)
	{
		cin>>b;
		addend(L,b);
	}
	cout<<"enter the sum of subsequence\n";
	cin>>c;
	print(L,c);
	return 0;
}


