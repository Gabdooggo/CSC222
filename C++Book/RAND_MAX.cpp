#include <cstdlib>
#include <iostream>
#include <ctime> //
using namespace std;

int main()
{
    cout << "RAND_MAX is: " << RAND_MAX << endl; //RAND_MAX is a variabvle for a already made function. It is a really big number
    cout << "Let's generate 3 random numbers." << endl;
    srand(time(NULL)); //This puts a certain time into the rand function
    cout << "Random number 1: " << rand() << endl; //You call rand to get a random number of RAND_MAX
    cout << "Random number 2: " << rand() << endl;
    cout << "Random number 3: " << rand() << endl;

    return 0;
}

void new_line()
{
    cout << endl;
}