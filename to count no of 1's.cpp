#include<iostream>
using namespace std;
int main()
{
	int  a;
	cout<<"enter the number\n";
	cin>>a;
	int count=0;
	while(a)
    {
    	a=a&(a-1);
        count++;
    }
    cout<<"total no of 1 :  "<<count;
    return 0;
}
