#include <iostream>
using namespace std;

bool is_even(int number) {
    return (number % 2) == 0;
}

int main() {
    int test_numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int number : test_numbers) {
        cout << "Number: " << number << " is " << (is_even(number) ? "even" : "odd") << endl;
    }
    return 0;
}