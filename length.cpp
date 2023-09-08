#include<iostream>
using namespace std;

int main ()
{
	int num[] = {5,4,3,2,1};
	int length = sizeof(num)/sizeof(num[0]);
	cout<<"Length of the Array: "<<length<<endl;
	
	return 0;
}
