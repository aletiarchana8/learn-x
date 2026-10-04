#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	int max=0;
	int i;
	cout << "enter size of array\n";
	cin >> n;
	cout << "enter array elements\n";
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
 		if(a[i]>max)
		{
			max=a[i];
		}
	}

       cout << "the largest number is:"<< max <<endl;
return 0;
}	





