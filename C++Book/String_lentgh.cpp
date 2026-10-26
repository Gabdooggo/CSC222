#include <iostream>
#include <string>
void str_len(std:: string character)
{
    int length = character.length();
    std::cout << "The length of the string is: " << length << std::endl;
}
int main() {
    std:: string message = "Hello, World!";
    str_len(message);
    return 0;
}