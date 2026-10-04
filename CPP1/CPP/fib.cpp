#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1;
	int c,n;
	cout<<"enter any number: ";
	cin>>n;
	cout<<"fibonaci series of num is: ";
	for(int i=1;i<=n;i++)
	{

		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}


