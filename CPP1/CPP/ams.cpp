#include <iostream>
using namespace std;

int main()
{
    int n, original, rem, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    int temp = n;

    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;

        int power = 1;

        for(int i = 1; i <= digits; i++)
        {
            power = power * rem;
        }

        sum = sum + power;

        temp = temp / 10;
    }

    if(sum == original)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }

    return 0;
}
