#include <iostream>
using namespace std;

bool find_largest(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (find_largest(num1, num2))
    {
        cout << num1 << " is the largest number." << endl;
    }
    else
    {
        cout << num2 << " is the largest number." << endl;
    }

    return 0;
}