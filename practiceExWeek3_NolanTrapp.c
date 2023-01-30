/***************************************************************
 * * File:    practiceExWeek3_NolanTrapp.c
 * * Author:   Nolan Trapp
 * * Purpose:  Case 1: Enter A range of numbers, Case 2: Print the values based on if in range or not.
 * out greeting specified number of times
 * * Source Code: Https://github.com/SparksTheFolf/CS-125
 * ****************************************************************/

#include <stdio.h>

int main(void) {
    int lowerBound, upperBound, userInput;

    printf("\n");
    printf("Case 1\n");
    printf("Enter the bounds.\n");
    printf("\n");

    printf("Enter the lower bound: ");
    scanf("%d", &lowerBound);
    printf("Enter the upper bound: ");
    scanf("%d", &upperBound);
    printf("Enter a value: ");
    scanf("%d", &userInput);
    if (userInput >= lowerBound && userInput <= upperBound) {
        printf("The value is in range.\n");
    } else {
        printf("The value is not in range.\n");
    }

    printf("\n");
    printf("Case 2\n");
    printf("Verify if in range.\n");
    printf("\n");

    printf("Enter a value or q to quit: ");
    scanf("%d", &userInput);
    while (userInput != 'q') {
        if (userInput >= lowerBound && userInput <= upperBound) {
            printf("The value is in range.\n");
        } else {
            printf("The value is not in range.\n");
        }
        printf("Enter a value or q to quit: ");
        scanf("%d", &userInput);
    }
    printf("Bye!\n\n");
    return 0;
}

