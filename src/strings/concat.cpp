#include <iostream>
#include <sstream>


/**
 * Append a char to a given text
 * @param text String which to append char
 * @param c Char to append to text
 * @return Text with char concatenated
 */
std::string append(std::string text, char c) {
    return text + c;
}

/**
 * Strings are immutable, so a new string is created
 * on each concatenation (Very expensive). Instead
 * is a best practice to use a string stream
 *
 * @return String created through string stream
 */
std::string constructLargeString() {
    std::stringstream stringBuilder;

    for (int i = 0; i < 100; ++i) {
        if (i % 10 == 0 && i > 0) {
            stringBuilder << std::endl;
        }

        stringBuilder << "HH";
    }

    return stringBuilder.str();
}

int main() {
    std::string text;

    // This is an empty string:
    std::cout << "Empty string:" << text << std::endl;

    // Is possible append chars to empty string
    text = append(text, '*');
    std::cout << "Now string is: " << text << std::endl;

    // Concat with std::string
    text = text + " || Concatenated text";
    std::cout << "Concatenated string is: " << text << std::endl;

    // Very large string assembled through string stream
    std::cout << "Large string is:" << std::endl;
    std::cout << constructLargeString() << std::endl;


    std::cout << std::endl << "Good bye!";
}
