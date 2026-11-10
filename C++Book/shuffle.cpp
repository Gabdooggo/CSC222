#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
//DO THIS WITH CHAR INSTEAD OF INTS
using namespace std;
void shuffle(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
         int randomIndex = i + rand() % (size - i); 
        int temp = array[i];
       array[i] = array[randomIndex];
        array[randomIndex] = temp;
    }
   cout << "Shuffled array: ";
    for (int i = 0; i < size; i++) {
        cout << (int)array[i] << " ";
    }
    cout << endl;
}
int main() {
    srand(time(0)); 
    char array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 cout << "Original array: ";
    for (char element : array) {
        cout << (int)element << " ";
    }
    cout << endl;
shuffle(array, 10);
}