#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a and b\n";
	cin>>a>>b;
	int j=a&b;
	cout<<"a & b = "<<j;
	cout<<endl;
	j=a|b;
	cout<<"a | b = "<<j;
	cout<<endl;
	j=a^b;
	cout<<"a ^ b = "<<j;
	cout<<endl;
	cout<<"~a = "<<~a;
	cout<<endl;
	cout<<"~b "<<~b<<endl;
	cout<<"left shift << by 1\n";
	cout<<"a<<1 = "<<(a<<1);
	cout<<endl;
	cout<<"b<<1 = "<<(b<<1);
	cout<<endl;
	cout<<"right shift >> by 1\n";
	cout<<"a>>1 = "<<(a>>1);
	cout<<endl;
	cout<<"b>>1 = "<<(b>>1);	
}
