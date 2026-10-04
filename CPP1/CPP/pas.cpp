#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter no of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int value = 1;

        // spaces
        for(int space = 0; space < n - i - 1; space++)
        {
            cout << "  ";
        }

        // numbers
        for(int j = 0; j <= i; j++)
        {
            cout << value << "   ";

            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
