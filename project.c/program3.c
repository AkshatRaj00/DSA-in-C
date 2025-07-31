#include <stdio.h>  // For printf
#include <stdlib.h> // For rand(), srand(), and NULL
#include <time.h>   // For time() to seed the random number generator

// Recursive function definition
int function(int n) {
    int i; // Declare i

    // Base case: If n is 0 or less, return 0 (stops the recursion)
    if (n <= 0) {
        return 0;
    }
    // Recursive case
    else {
        // Generate a random integer 'i' between 0 and n-1 (inclusive)
        // rand() % n ensures the number is within the range [0, n-1]
        i = rand() % n;

        // Print a message (corrected the missing quote)
        printf("this is a recursive call with n=%d, choosing i=%d\n", n, i);

        // Recursive step: Sum of two recursive calls
        // This pattern is characteristic of divide-and-conquer algorithms
        // where a problem of size 'n' is split into two subproblems
        // of sizes 'i' and 'n-i-1'.
        return function(i) + function(n - i - 1);
    }
}

// Main function to test the 'function'
int main() {
    // Seed the random number generator using the current time.
    // This makes the sequence of random numbers different each time the program runs.
    srand(time(NULL));

    int n_value; // Declare a variable to store the user's input for n

    // Prompt the user to enter a value for n
    printf("Enter a non-negative integer for n: ");

    // Read the integer input from the user
    if (scanf("%d", &n_value) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Indicate an error
    }

    // Call the 'function' with the user-provided n and print the result
    printf("\nResult of function(%d): %d\n", n_value, function(n_value));

    return 0; // Indicate successful execution
}