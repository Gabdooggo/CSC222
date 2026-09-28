#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sum = 0;
    if(n >= 0)
    {
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
      cout << "The sum of integers from 1 to " << n << " is: " << sum << endl;
}

    return 0;
}