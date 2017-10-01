#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a\n";
	cin>>a;
	cout<<"enter the position at which a you want to check bit\n";
	int i;
	cin>>i;
	if(a&(1<<i))
	{
		cout<<"bit at "<<i<<" position is "<<1;
	}
	else
	{
		cout<<"bit at "<<i<<" position is "<<0;
	}
}
