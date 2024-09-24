#include<iostream>
#include<string>
using namespace std;
int linearSearch(string arr[],int size,string target)
{
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	string arr[10];
	int size;
	
	cout<<"Enter the size of Array : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the array element at index : "<<i<<"\t";
		cin>>arr[i];
	}
	size = sizeof(arr)/sizeof(arr[0]);
	
	string target;
	cout<<"Enter the product to be search : ";
	cin>>target;
	
	int result=linearSearch(arr,size,target);
	if(result!=-1)
	{
		cout<<"Element "<<target<<" found at index "<<result<<endl;
	}
	else
	{
		cout<<"Element "<<target<<" not found in the array"<<endl;
	}
	
	return 0;
}
