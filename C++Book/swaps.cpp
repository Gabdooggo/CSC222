#include <iostream>
using namespace std;
void wont_swap(int a, int b) // Uses different address for the variuables inputted meaning x and y have different addresses than a and b
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void will_swap(int& a, int& b) //Uses the same address for the variables inputted meaning x and y have the same addresses as a and b
{
    cout << "a: " << a << "  b: " << b << endl;
    cout << "address of a: " << long(&a) << endl;
    cout << "address of b: " << long(&b) << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "  b: " << b << endl;
}

void shuffle(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int randomIndex = rand() % size;
        int temp = array[i];
       array[i] = array[randomIndex];
        array[randomIndex] = temp;
    }
   cout << "Shuffled array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    cout << endl;
}

void will_swap_with_pointers(char* a, char* b) //This basically makes it so that it affect mains variables because it uses pointers to reference the values of a and b in main
{
    cout << "a: " << *a << "  b: " << *b << endl;
    cout << "address of a: " << long(a) << endl;
    cout << "address of b: " << long(b) << endl;
    int temp = *a; //This makes temp a reference to a
    *a = *b; //This makes a = b
    *b = temp; // And this makes b = temp which is a reference to a so now b = a
    //So they basically swap the values of a and b by using pointers to reference the values of a and b
    cout << "a: " << *a << "  b: " << *b << endl;
}

int main() {
   /* int x = 7;
    int y = 11;

    cout << "x: " << x << "  y: " << y << endl;
    cout << "address of x: " << long(&x) << endl;
    cout << "address of y: " << long(&y) << endl;
    cout << "Calling wont_swap..." << endl;
    wont_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;
    cout << "Calling will_swap..." << endl;
    will_swap(x, y);
    cout << "x: " << x << "  y: " << y << endl;

char letter = 'a';
char* cp = &letter; // cp is a pointer to letter
//referencing with char you do char* variable name = &variable_name; // & is the address of operator

cout << "letter: " << letter << endl;
cout << "address of letter: " << long(&letter) << endl;
cout << "value of pointer to letter: " << long(cp) << endl;
cout << "address of pointer to letter: " << long(&cp) << endl;
cout << "dereferencing the pointer cp gives: " << *cp << endl;*/

char c = 'c'; 
char d = 'd';
cout << "address of c: " << long(c) << endl;
cout << "address of d: " << long(d) << endl;
cout << "Calling will_swap_with_pointers..." << endl;
will_swap_with_pointers(&c, &d);
cout << "address of c: " << long(c) << endl;
cout << "address of d: " << long(d) << endl;
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 cout << "Original array: ";
    for (int element : array) {
        cout << element << " ";
    }
    cout << endl;
shuffle(array, 10);
// WITH POINTERS:
/*will_swap_with_pointers(&c, &d); // Passes memory addresses

// WITHOUT POINTERS:
will_swap_with_pointers(c, d);  */ // Passes copies of the values

    return 0;
}
