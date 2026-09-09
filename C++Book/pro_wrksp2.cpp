#include <cstdlib>
#include <iostream>
#include <ctime> 
#include <iomanip>
using namespace std;
//Setw makes it so that the next value is going to be printed however many spaces after the selected value.
//left makes it so instead of setw making spaces to the right its its to the left instead
//right is just regular setw where it makes spaces to the right
//Inetrnal I think only takes numbers or characters it doesn't take any like signs and stuff and it also counts the lines and spaces them between them.
void statements(); 
void decimals();
void floats();
int main()
{
    /*cout << "1" << endl;
  cout << "*" << -23 << "*" << endl;
  cout << "*" << setw(6) << -23 << "*" << endl;

  cout << "2" << endl;
  cout << left;
  cout << "*" << setw(6) << -23 << "*" << endl;

  cout << "3" << endl;
  cout << internal;
  cout << "*" << setw(10) << -233337 << "*" << endl;
  
  cout << "4" << endl;
  cout << right;
  cout << "*" << setw(6) << -23 << "*" << endl;

  cout << "5" << endl;
  cout << internal;
  cout << "*" << setw(10) << -233337 << "*" << endl;*/
  //statements();
  //decimals();
  floats();

return 0;
}

void statements()
{
    bool a = true, b = false;

  cout << "a " << a << endl;
  cout << boolalpha <<  "a " << a << endl;

  cout << noboolalpha << "b " << b << endl;
  cout << boolalpha <<  "b " << b << endl;
}

void decimals()
{
    int a = 235273;

  cout << "a (decimal) " << dec << a << endl;
  cout << "a (octal) " << oct << a << endl;
  cout << "a (hex) " << hex << a << endl;

  cout << "With showbase" << endl;
  cout << showbase;
  cout << "a (decimal) " << dec << a << endl;
  cout << "a (octal) " << oct << a << endl;
  cout << "a (hex) " << hex << a << endl;

  cout << "With noshowbase" << endl;
  cout << noshowbase;
  cout << "a (decimal) " << dec << a << endl;
  cout << "a (octal) " << oct << a << endl;
  cout << "a (hex) " << hex << a << endl;

}

void floats()
{
    float a = 5.2;
  float b = 32000004032400.34;

  cout << "Different formats" << endl;
  cout << "General" << endl;
  cout << a << " " << b << endl;
  cout << "Fixed" << endl;
  cout << fixed << a << " " << b << endl;
  cout << "Scientific" << endl;
  cout << scientific << a << " " << b << endl;

  cout << "Back to general" << endl;
  cout.unsetf(ios::fixed | ios::scientific);
  cout << a << " " << b << endl;

  cout << "Set precision to 1" << endl;
  cout << setprecision(1) << a << " " << b << endl;

  cout << "Set precision to 20" << endl;
  cout << setprecision(20) << a << " " << b << endl;

  cout << "showpoint" << endl;
  cout << setprecision(6) << showpoint << a << endl;
}

