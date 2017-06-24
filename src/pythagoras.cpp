#include <iostream>
#include <cmath>

using namespace std;


//
// Basic math operations

double addition(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        return 0;
    }

    return a/b;
}

double power(double a, double b) {
    return pow(a, b);
}


//
// Pythagoras theorem operations

double calcHyp() {
    double sideA;
    double sideB;

    cout << "Enter side A value: ";
    cin >> sideA;

    cout << "Enter side B value: ";
    cin >> sideB;

    // Calculate hypotenuse
    return sqrt(addition(power(sideA, 2), power(sideB, 2)));
}

double calcSideA() {
    double sideB;
    double hyp;

    cout << "Enter hypotenuse value: ";
    cin >> hyp;

    cout << "Enter side B value: ";
    cin >> sideB;

    // Calculate side A
    return sqrt(subtract(power(hyp, 2), power(sideB, 2)));
}

double calcSideB() {
    double sideA;
    double hyp;

    cout << "Enter hypotenuse value: ";
    cin >> hyp;

    cout << "Enter side A value: ";
    cin >> sideA;

    // Calculate side B
    return sqrt(subtract(power(hyp, 2), power(sideA, 2)));
}


int main() {
    int option = 0;

    cout << "   |\\              " << endl;
    cout << "   |  \\ Hypotenuse " << endl;
    cout << " A |    \\          " << endl;
    cout << "   |______\\        " << endl;
    cout << "      B             " << endl;
    cout << "                    " << endl;
    cout << "Which triangle side do you want to calculate?" << endl;
    cout << "0. Exit program " << endl;
    cout << "1. Hypotenuse   " << endl;
    cout << "2. Side A       " << endl;
    cout << "3. Side B       " << endl;
    cout << "Select an operation: ";
    cin >> option;

    switch (option) {
        case 0:
            exit(0);

        case 1: {
            double hyp = calcHyp();
            cout << "Hypotenuse is: " << hyp << endl << endl;
        }
        break;

        case 2: {
            double sideA = calcSideA();
            cout << "Side A is: " << sideA << endl << endl;
        }
        break;

        case 3: {
            double sideB = calcSideB();
            cout << "Side B is: " << sideB << endl << endl;
        }
        break;

        default:
            cout << "Enter a valid option" << endl << endl;
    }

    main();
}
