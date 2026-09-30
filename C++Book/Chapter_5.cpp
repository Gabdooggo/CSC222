#include <iostream>
using namespace std;
//The answer for the second question is 10. The first function f() returns 1, the second function f(0) returns 1, and the third function f(3, 4) returns 8. Therefore, the sum is 1 + 1 + 8 = 10.
/*bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short); //This equals 1
  bool floats = sizeof(float) == 0.5 * sizeof(double); //This equals 1. since size of float = 4 while size of double = 8
  bool chars = sizeof(char) == 1; //This equals 1 since char always = 1 byte*/

int f(char x, float y) {
    return 2 * x + y;
}

int f(float x, char y) {
    return x - y;  
}

int f(int a, int b, int c) {
    int total = 0;
    while (--c)
        total += b;
    return total - a;
}

int main() {
    char c1 = 3;
    char c2 = 5;
    cout << f(1, 4, 2) << f(c2, 2.0) << f(4.0, c1) << endl;
    return 0;
}
