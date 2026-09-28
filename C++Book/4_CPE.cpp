#include <iostream>
using namespace std;
//For #1 the output is 7
//For #2 the final value of the c variable is 2.
//For #3 the final value of n is 1.
//For #4 what the expression goes to is false which is 6
void practice_2();
int main() {
   // int n = 1 % 2 + 4 % 2; //Modulus gets the remainder not the whole number so if there is no remainder than its just 0. 
   /* int i = 4;
    float f = 5;
    bool b1 = i < f, b2 = f < i, b3 = f / i < i / f;
    if (b3)
    {
        if (b2)
            i += 1;
        else
            i += 2;
    
    }
    else if (b1)
        i += 3;
    else
        i += 4;
    cout << i << endl;*/
//practice_2();
//cout << n << endl;
/*int x = 3, y = x++, z = ++x;
    cout << (z - x < y - x ? 5 : 6) <<  endl;
   cout << z << x << y << endl;
    */
   //The double greater than and less than sign are bit shifting signs by however many shifts. They will always evaluate to 1 or 0 since its bits
   int n = 2, m = n >> 1, p = m >> n, q = 1 << p, r = q << q; 
    cout << m << " " << p << " " <<  q << " " << r << endl;
    return 0;
}

void practice_2()
{
    int a = 4, b = 3, c = 2;
if (a > 0) {
    b -= 4;
    if (b > 0) {
        if (c > 0)
            c++;
        if (c <= 3)
            c--;
    }
if (b < 0)
    a--;
}
c = a + b + c;

cout << c << endl;
}