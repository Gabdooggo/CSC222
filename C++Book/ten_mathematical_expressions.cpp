#include <iostream>
using namespace std;
#include <cmath>
// main: generate some simple output

int main()
{
    int n;
    int m;

    cout << "Put any value here\n";
    cin >> m;
    cout << "Put any value here as well \n";
    cin >> n;
    cout << "m*n = " << m*n  << "." << endl;
    cout << "m/n = " << m/n  << "." << endl;
    cout << "m+n = " << m+n  << "." << endl;
    cout << "m-n = " << m-n  << "." << endl;
    cout << "m^3 = " << pow(m, 3) << "." << endl; //The pow function makes it so its an exponent
    cout << "Square root of m = " << sqrt(m) << "." << endl;
    cout << "n^3 = " << pow(n, 3) << "." << endl;
    cout << "Square root of n = " << sqrt(n) << "." << endl;
    cout << "m/m = " << m/m << "." << endl;
    cout << "n/n = " << n/n << "." << endl;
    return 0;
}
