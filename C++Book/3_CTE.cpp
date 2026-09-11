#include <cstdlib>
#include <iostream>
#include <ctime> 
#include <iomanip>
using namespace std;

void f();
void g();
void h();
int main()
{
/*double f = 4.997;
int n = int(f);
int m = (int)f;
cout << n << ' ' << m << endl;*/
//f();
//g();
//h();
//cout << endl;
int a = 1, b = 2;
float f = a / b;
cout << f << endl;
return 0;
}
void f() {
    cout << "C";
}

void g() {
    cout << "B";
}

void h() {
    cout << "A";
}