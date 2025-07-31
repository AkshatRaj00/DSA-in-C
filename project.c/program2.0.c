#include <stdio.h> // Standard input-output library for functions like printf and scanf

// func function definition
void func(int n)
{
    // Declare and initialize sum and product variables
    // These variables are declared but not used in the current implementation.
    int sum = 0;
    int product = 1;

    // Outer loop: iterates 'i' from 0 up to (n-1)
    for (int i = 0; i < n; i++)
    {
        // Inner loop: iterates 'j' from 0 up to (n-1) for each 'i'
        for (int j = 0; j < n; j++)
        {
            // Prints the current values of 'i' and 'j', separated by a comma and a space,
            // followed by a newline character.
            printf("%d , %d\n", i, j);
        }
    }
}

// main function - the entry point of the program
int main()
{
    int n; // Declare an integer variable 'n'

    // Prompts the user to enter a value for 'n'
    printf("Enter a value for n: ");

    // Reads an integer from the standard input and stores it in 'n'
    scanf("%d", &n);

    // Calls the 'func' function, passing the value of 'n' to it
    func(n);

    return 0; // Indicates that the program executed successfully
}