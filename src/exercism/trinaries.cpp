#include <iostream>
#include <algorithm>


double toDecimal(char charTrinary, int position) {

    // ASCII code for digits starts at 48 ('0' = 48)
    // So subtract 48 to get the decimal representation
    // of given char
    int trinary = charTrinary - 48;

    // Invalid trinary must be equal to 0
    if (trinary < 0 || trinary > 2) {
        trinary = 0;
    }

    // Get corresponding power
    return trinary * std::pow(3, position);
}

int main() {
    std::string trinaryNumber;

    // Ask to user for trinary number
    std::cout << "Please enter trinary number: ";
    std::cin >> trinaryNumber;

    // Reverse to use char position as power during conversion
    std::reverse(trinaryNumber.begin(), trinaryNumber.end());

    // Convert digit by digit
    double decimalValue = 0;
    for (int i = 0; i < trinaryNumber.size(); ++i) {
        decimalValue += toDecimal(trinaryNumber[i], i);
    }

    // Show result to user
    std::cout << "The decimal value is: " << decimalValue;
}

