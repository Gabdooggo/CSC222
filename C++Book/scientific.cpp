#include <iostream>
using namespace std;
// For 1. the value of i is 0, Since a float cannot be converted to an interger;
//For 3. 42 is a correct integer number in C++
//For 4. 9 is the value of f
//For 6. 4.2 is the correct float in C++
//For 7. The utput is 7 6 6
// For 8. The output is 13 -1

int main () {
    float f = 4.0 / 8.0 + 8.0 / 16.0 + 8.0;
     //int i = f; 
     int i = 5, j = i++, k = ++i;
     cin >> i;
     cout << j + i << k - i << endl;
     //int i = 5, j = ++i, k = i++;
     //cout << i << j << k << endl;
    //cout << f;
    //cout << scientific << f << "\n";
    return 0;
}