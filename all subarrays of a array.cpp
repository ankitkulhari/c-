#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array\n";
	cin>>n;
	int a[n];
	cout<<"enter the array elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"all subarrays\n";
	for(int i=1;i<=(1<<n);i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				cout<<a[j]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
