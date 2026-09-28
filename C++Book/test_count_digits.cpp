#include <iostream>
using namespace std;
int count_digits(int n) {
    int count = 0;
    while (n != 0) 
    {
         n /= 10; //n is divided by 10 because thats how much decimal digits are in a number. 
        count++;
    }
    cout << count;
    return count;
}
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if(n >= 0)
    {
        count_digits(n);
    }
    return 0;
}