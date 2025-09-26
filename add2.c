#include <stdio.h>

/*
 * This program takes two numbers from the user and calculates their sum.
 */
void addition2() {
    // Declare three integer variables.
    // 'num1' and 'num2' will store the numbers entered by the user.
    // 'sum' will store the result of the addition.
    int num1, num2, sum;

    // Prompt the user to enter the first number.
    printf("Enter the first number: ");

    // Read the integer entered by the user and store it in 'num1'.
    scanf("%d", &num1);

    // Prompt the user to enter the second number.
    printf("Enter the second number: ");

    // Read the integer entered by the user and store it in 'num2'.
    scanf("%d", &num2);

    // Add the two numbers and store the result in 'sum'.
    sum = num1 + num2;

    // Print the result to the console, showing the original numbers and their sum.
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Return 0 to indicate that the program executed successfully.
    // return 0;
}

