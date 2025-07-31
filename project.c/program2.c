#include <stdio.h> // Include the standard input/output library for printf and scanf

// func function definition
void func(int n)
{
    int sum = 0;      // Initialize sum to 0
    int product = 1;  // Initialize product to 1

    // Outer loop: iterates 'i' from 0 up to (n-1)
    for (int i = 0; i < n; i++)
    {
        // Inner loop: iterates 'j' from 0 up to (n-1) for each 'i'
        for (int j = 0; j < n; j++)
        {
            // Print the current values of i and j
            printf("%d %d\n", i, j);

            // Example usage of sum and product (you can modify this logic)
            sum += i;       // Add 'i' to sum
            product *= (j + 1); // Multiply product by (j+1) to avoid multiplying by zero if j is 0
        }
    }
    // After the loops, you can print the final sum and product if needed
    printf("Final Sum of i's (accumulated): %d\n", sum);
    printf("Final Product of (j+1)'s (accumulated): %d\n", product);
}

// main function - the entry point of the program
int main()
{
    int n; // Declare an integer variable 'n'

    // Prompt the user to enter a value for 'n'
    printf("Enter a value for n: ");

    // Read an integer from the standard input and store it in 'n'
    scanf("%d", &n);

    // Call the 'func' function, passing the value of 'n' to it
    func(n);

    return 0; // Indicate that the program executed successfully
}


