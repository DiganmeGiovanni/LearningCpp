#include <iostream>
#include <algorithm>


int main() {
    std::string word;

    // Ask user for string to reverse
    std::cout << "Enter a string to reverse it: ";
    std::cin >> word;

    // Reverse the string
    std::reverse(word.begin(), word.end());

    // Show reversed string
    std::cout << "Reversed string is: ";
    std::cout << word;
}
