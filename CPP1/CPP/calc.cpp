#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int choice;
	cout << "enter value of a:"<<endl;
	cin >> a;
	cout << "enter value of b:" <<endl;
	cin >> b;
	cout << "1.addition" <<endl;
	cout <<"2.subtraction" <<endl;
	cout <<"3.multiplication"<<endl;
	cout <<"4.division" <<endl;
	cout <<"5.exit" <<endl;
	cout<<"enter your choice:"<<endl;
	cin >> choice;
	switch (choice)
	{
		case 1: 
			cout << "addition of a and b is: " << a + b<<endl;
			break;
		case 2:
			cout << "substraction of a and b is: "<<a-b<<endl;
			break;
		case 3:
			cout << "multiplication of a and b is: " <<a*b<<endl;
			break;
		case 4:
			cout << "division of a and b is:"<<a/b<<endl;
			break;
		case 5:
			cout<<"exit(0)";
			break;
		default:
			cout << "invalid choice\n";


	}
	return 0;
}
