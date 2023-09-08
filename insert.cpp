#include<iostream>
using namespace std;

int main()
{
	int num[] = {1,2,3,4,5,6,7,8,9,10};
	int n = 11;
	int x = 1;
	int size = sizeof(num)/sizeof(num[0]);
	cout<<"Original Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	for(int i=size;i>x;i--)
	{
		num[i] = num[i-1];
	}
	
	num[x] = n;
	cout<<"\nNew Array: ";
	for(int i=0;i<=size;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}
