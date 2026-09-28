#include <iostream>
#include <cmath>
using namespace std;

int sum_of_squares(int n) {
    float d = 0;
    for (int i = 1; i <= n; ++i) {
        d += sqrt(i);
    }
    cout << d;
    return d;
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if(n >= 0)
    {
        sum_of_squares(n);
    }
    return 0;
}