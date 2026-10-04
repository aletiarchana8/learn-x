#include <iostream>
using namespace std;
int main()
{
	int rem;
	int n,i,rev=0;
	cout<<"enter any number\n";
	cin >> n;
	int original=n;
	rev=0;

	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(original==rev)
	{
		cout<<"the num is palindrome\n";
	}
	else
	{
		cout<<"not a plaindrome\n";
	}
	return 0;

}

	
