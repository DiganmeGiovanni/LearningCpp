#include <iostream>
#include <sstream>


/**
 * Calculates the factorial of given parameter and
 * prints all required operations for calculation.
 *
 * @param n Number which to calculate factorial
 * @return The calculated factorial
 */
int factorial(int n) {
    std::stringstream steps;
    steps << n;

    // Factorial is always 1 for numbers less than 2
    if (n <= 2) {
        return 1;
    } else {

        int result = n;
        for (int i = n; i > 2; i--) {
            result = result * (i - 1);
            steps << " * " << (i - 1);
        }

        // Last step is multiply * 1, concat manually and avoid
        // multiplication
        steps << " * 1";

        std::cout << steps.str();
        return result;
    }
}

int main() {
    int x;

    std::cout << "Please enter a number to compute its factorial: ";
    std::cin >> x;

    std::cout << std::endl << "Calculating " << x << "!:" << std::endl;
    std::cout << " = " << factorial(x);
}
