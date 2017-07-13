#include <iostream>

/**
 * A given year is leap when:
 * - Evenly divisible by 4
 * - No evenly divisible by 100
 * - No evenly divisible by 400
 *
 * @param year Year to test
 * @return Indicates if given year is leap
 */
bool is_leap_year(int year) {
    return year % 4 == 0 && year % 100 != 0 && year % 400 != 0;
}

int main() {
    int year;

    std::cout << "This program checks if a given year is leap" << std::endl;
    std::cout << "Enter year to check: ";
    std::cin >> year;

    if (is_leap_year(year)) {
        std::cout << year << " is leap.";
    } else {
        std::cout << year << " is not leap.";
    }

    return 0;
}
