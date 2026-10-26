#include <iostream>
#include <string>
using namespace std;
void name_format(string first, string last);
int main() {
    name_format("gABRIEL", "callauprellwitz");
    return 0;
}

void name_format(string first, string last)
{
    for (int i = 0; i < first.length();) {
        //first[0] = toupper(first[0]);
        int ascii_val = static_cast<int>(first[i]);
        if(i == 0)
        {
            if(ascii_val >= 97 && ascii_val <= 122)
            {
                first[i] = static_cast<char>(ascii_val - 32);
            }
        }
        if(ascii_val >= 65 && ascii_val <= 90 && i > 0) {
            first[i] = static_cast<char>(ascii_val + 32);
        }
        i++;
    }

    for (int i = 0; i < last.length();) {
        //first[0] = toupper(first[0]);
        int ascii_val = static_cast<int>(last[i]);
        if(i == 0)
        {
            if(ascii_val >= 97 && ascii_val <= 122)
            {
                last[i] = static_cast<char>(ascii_val - 32);
            }
        }
        if(ascii_val >= 65 && ascii_val <= 90 && i > 0) {
            last[i] = static_cast<char>(ascii_val + 32);
        }
        i++;
    }

    cout << last << ", " << first << endl;
}