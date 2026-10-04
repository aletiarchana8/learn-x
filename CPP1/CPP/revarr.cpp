#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n,i;
	cout <<"enter array size:\n";
	cin>> n;
	cout <<"enter array elemnts: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	  cout<<"reverresd array is: ";
       	for(i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}



