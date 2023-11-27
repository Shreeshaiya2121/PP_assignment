#include <iostream>
using namespace std;

// Non-parameterized function: prints a simple message
void nonParameterizedFunction() {
    cout << "This is a non-parameterized function." << endl;
}

// Parameterized function: multiplies two numbers and displays the result
void parameterizedFunction(int a, int b) {
    int result = a * b;
    cout << "The product of " << a << " and " << b << " is: " << result << endl;
}

int main() {
    // Calling the non-parameterized function
    nonParameterizedFunction();

    // Calling the parameterized function with values 5 and 10
    parameterizedFunction(5, 10);

    return 0;
}
