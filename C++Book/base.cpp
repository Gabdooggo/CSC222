// modify basefield - dec, hex, and oct
#include <iostream>
using namespace std;
//For 2. the value of 028 as a literal is invalid
//For 5. The literal is invalid since an interger cannot contain a float it says.


int main () {
    int n = -2e-2;
    cout << "Some bits represented in decimal: " << dec << n << '\n';
    cout << "Same bits represented in hexadecimal: " << hex << n << '\n';
    cout << "Same bits represented in octal: " << oct << n << '\n';

    return 0;
}
