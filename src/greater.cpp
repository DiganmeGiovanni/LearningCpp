#include <iostream>

bool are_equal(double a, double b) {
    return a == b;
}

double greater(double a, double b) {
    if (a > b) {
        return a;
    }

    return b;
}

int main() {
    double greater_number;
    double a;
    double b;
    double c;

    std::cout << "Lets to calculate the greater of three numbers" << std::endl;
    std::cout << "Enter number 1: ";
    std::cin >> a;

    std::cout << "Enter number 2: ";
    std::cin >> b;

    std::cout << "Enter number 3: ";
    std::cin >> c;

    // Evaluate given numbers
    if (are_equal(a, b) && are_equal(a, c)) {
        std::cout << "The tree numbers are equal";
    } else {
        greater_number = greater(greater(a, b), c);
        std::cout << "Greater number is: " << greater_number << std::endl;
    }

    // Ask to user if restart program or exit now
    std::cout << "\nCalculate again with different numbers?" << std::endl;
    std::cout << "1. Yes" << std::endl;
    std::cout << "2. No"  << std::endl;
    std::cout << "Type your option: ";
    int option;
    std::cin >> option;

    if (option == 1) {
        std::cout << std::endl;
        main();
    } else {
        std::cout << "\nGood bye";
        return 0;
    }
}
