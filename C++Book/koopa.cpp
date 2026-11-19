#include <iostream> //This is needed for c out and c in
#include <string>
#include <vector>
using namespace std;
//#include "num_vector_utils.h"
int lookforkoopa(string koopa)
{
    
        koopa.find("peach");
        size_t found = koopa.find("Peach");
        int counter = 0;
        if (found != string::npos)
        {
            for (int i = 0; i < koopa.length(); i++)
            {
                size_t found = koopa.find("Koopa");
                cout << "message: " << koopa << endl;
                cout << "Koopa found on index: " <<found << endl;

                if(found != string::npos)
                {
                    counter ++;
                    koopa.erase(found, 5);
                }
                else
                {
                    break;
                }
                cout << "Counter: " << counter << endl;
            }
        }
        else
        {
            return -1;
        }
        return counter;
}

int main() {
string message = "ioPeachKoopaujKoopaopk";
lookforkoopa(message);
return 0;
}