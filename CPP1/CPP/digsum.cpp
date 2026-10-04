#include <iostream>
using namespace std;
int main()
{
	int n;
	int rem,sum=0;
	cout<<"enter any number\n";
	cin>>n;
	while(n!=0)
	{

		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	cout<<"sum of digits ="<<sum<<endl;
	return 0;
}


