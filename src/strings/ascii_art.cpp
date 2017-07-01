#include <iostream>
#include <sstream>


/**
 * Creates a line string composed of given
 * char repeated given length and separated by
 * spaces
 *
 * @param length Line length
 * @param c Char to use in line
 * @return line
 */
std::string line(int length, char c) {
    std::stringstream lineStream;

    for (int i = 0; i < length; i++) {
        lineStream << c << ' ';
    }

    return lineStream.str();
}

std::string triangleDescendant(int length, char c) {
    std::stringstream triangleStream;

    for (int i = length; i > 0; i--) {
        triangleStream << line(i, c) << std::endl;
    }

    return triangleStream.str();
}

std::string triangleAscendant(int length, char c) {
    std::stringstream triangleAscendant;

    for (int i = 1; i <= length; i++) {
        triangleAscendant << line(i, c) << std::endl;
    }

    return triangleAscendant.str();
}

std::string triangleDescendantInverted(int length, char c) {
    std::stringstream triangleDescendantInverted;

    int spacesCounter = 0;
    for (int i = length; i > 0; i--, spacesCounter++) {
        triangleDescendantInverted << line(spacesCounter, ' ');
        triangleDescendantInverted << line(i, c) << std::endl;
    }

    return triangleDescendantInverted.str();
}

std::string triangleAscendantInverted(int length, char c) {
    std::stringstream triangleAscendantInverted;

    int spacesCounter = length -1;
    for (int i = 1; i <= length; i++, spacesCounter--) {
        triangleAscendantInverted << line(spacesCounter, ' ');
        triangleAscendantInverted << line(i, c) << std::endl;
    }

    return triangleAscendantInverted.str();
}

int main() {
    std::cout << "Line: " << line(5, '*') << std::endl << std::endl;

    std::cout << "Triangle descendant: " << std::endl;
    std::cout << triangleDescendant(5, '*') << std::endl;

    std::cout << "Triangle ascendant: " << std::endl;
    std::cout << triangleAscendant(5, '*') << std::endl;

    std::cout << "Triangle descendant inverted: " << std::endl;
    std::cout << triangleDescendantInverted(5, '*') << std::endl;

    std::cout << "Triangle ascendant inverted: " << std::endl;
    std::cout << triangleAscendantInverted(5, '*') << std::endl;
}
