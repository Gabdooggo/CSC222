// modify basefield - dec, hex, and oct
#include <iostream>
using namespace std;
//For 2. the value of 028 as a literal is invalid
//For 5. The literal is invalid since an interger cannot contain a float it says.
//For 11. The literal value is 16
//For 13. The literal value is 0
//For 15. The literal value is 35
//For 16. The literal is invalid as there can't be a capital letter


int main () {
    int n = X10;
    cout << "Some bits represented in decimal: " << dec << n << '\n';
    cout << "Same bits represented in hexadecimal: " << hex << n << '\n';
    cout << "Same bits represented in octal: " << oct << n << '\n';

    return 0;
}
