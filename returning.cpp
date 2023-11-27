#include <iostream>
using namespace std;

// Non-returning function: prints a message and does not return any value
void nonReturningFunction() {
    cout << "This is a non-returning function. It does not return any value." << endl;
    // No return statement in a void function
}

// Returning function: calculates the sum of two integers and returns the result
int returningFunction(int a, int b) {
    int sum = a + b;
    return sum; // Returns the calculated sum value to the calling code
}

int main() {
    // Calling the non-returning function
    nonReturningFunction();

    // Calling the returning function and using its returned value
    int x = 5, y = 10;
    int result = returningFunction(x, y);
    
    // Displaying the result obtained from the returning function
    cout << "The sum of " << x << " and " << y << " is: " << result << endl;

    return 0;
}
