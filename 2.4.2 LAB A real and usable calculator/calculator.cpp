#include <iostream>
using namespace std;
int main()
{
    int a;
        int n;
    int choice;
        int b;
    cout << "enter 1st number";
    cin >> a;

    cout << "\nMENU:\n";
    cout << "0 - AC (Clear)\n";
    cout << "1 - Addition\n";
    cout << "2 - Subtraction\n";
    cout << "3 - Multiplication\n";
    cout << "4 - Division\n";
    cout << "Your choice: ";
    cin >> choice;


    n= choice;

    cout << "enter 2nd number";
    cin >> b;
    switch (choice)
    {
    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a - b << endl;
        break;
    case 3:
        cout << a * b << endl;
        break;
    case 4:
        cout << a / b << endl;
        break;
    default:
        cout << "enter a number and select a operator";
    }
    return 0;
}
