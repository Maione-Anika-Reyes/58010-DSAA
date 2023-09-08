#include<iostream>
using namespace std;

int main()
{
	int num[] = {5,4,3,2,1};
	int size = sizeof(num)/sizeof(num[0]);
	
	cout<<"Original Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	
	for(int i=0;i<size/2;i++)
	{
		int temp = num[i];
		num[i] = num[size-i-1];
		num[size-i-1] = temp;
	}
	
	cout<<"\nReversed Array: ";
	for(int i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
	
}
