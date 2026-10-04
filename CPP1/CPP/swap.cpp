#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "enter value a" << endl;
	cin >> a;
	cout << "enter value of b" << endl;
	cin >> b;
	cout << "before swapping numbers are:"<< a << " " <<b << endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout << "after swapping numbers are:"<< a << " "<<b << endl;
	return 0;
}



