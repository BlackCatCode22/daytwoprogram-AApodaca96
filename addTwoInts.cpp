// this is a comment
// Name of programmer: Angelo Apodaca
// Date: Aug. 9, 2023
// arithmeticOperations.cpp

#include <iostream>

using namespace std;

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to perform division
double divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    cout << "\n\n Welcome to the arithmetic operations program! \n\n";

    int num1 = 0;
    int num2 = 0;
    int theSum = 0;
    int theDifference = 0;
    int theProduct = 0;
    double theQuotient = 0;

    // Get the first number from the user
    cout << " \n Please enter the first number...";
    cin >> num1;

    // Get the second number from the user
    cout << "\n Please enter the second number...";
    cin >> num2;

    // Call the arithmetic functions
    theSum = add(num1, num2);
    theDifference = subtract(num1, num2);
    theProduct = multiply(num1, num2);
    theQuotient = divide(num1, num2);

    // Output the results
    cout << "\n\n The Sum is " << theSum << "! \n\n";
    cout << "\n\n The Difference is " << theDifference << "! \n\n";
    cout << "\n\n The Product is " << theProduct << "! \n\n";
    cout << "\n\n The Quotient is " << theQuotient << "! \n\n";

    return 0;
}
