/***************************************************************
 * * File:    hw2_NolanTrapp.c
 * * Author:   Nolan Trapp
 * * Date: 1-24-2023
 * * Purpose:  Write a program that keeps asking the user to supply an integer as input until the user tells the program to stop by entering a value of q (or any non-digit character). 
 * * Source Code: Https://github.com/SparksTheFolf/CS-125
 * [Sources Of Help]
 * 	-Online / StackOverFlow - Github - C Class Programming Book(Math Section)
 * ****************************************************************/
#include <stdio.h>

int main()
{

    printf("\n");
    printf("Case 1\n");
    printf("Supply a int and print the values.\n");
    printf("\n");

    int num, positive = 0, negitive = 0, sum = 0, total = 0;
    printf("Enter an integer (or q to quit): ");
    while (scanf("%d", &num) == 1)
    {
        total++;
        if (num > 0)
            positive++;
        else if (num < 0)
            negitive++;
        sum += num;
        printf("Enter an integer (or q to quit): ");
    }

    printf("You entered %d integers.\n%d of the integers were positive.\n%d of the integers were negative.\nThe sum of the %d integers was %d.\n\n", total, positive, negitive, total, sum);

    return 0;

}
