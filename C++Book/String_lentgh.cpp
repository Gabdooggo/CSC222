#include <iostream>
#include <string>
using namespace std;
void str_len(string character)
{
    int length = character.length();
    cout << "The length of the string is: " << length << endl;
}
int main() {
   string message = "Message";
    str_len(message);
    return 0;
}