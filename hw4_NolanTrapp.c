/* * ***************************************************************
 * * * Author:   Nolan Trapp
 * * * Date: 2-12-2023
 * * * * Purpose:  This propgram is a slot machine.
 * * * * Source Code: Https://github.com/SparksTheFolf/CS-125
 * * * [Sources Of Help]
 * * *   - Github
 * * *   - C Class Programming Book(Math Section)
 * * *	 - W3 Schools
 * * * ****************************************************************/


#include <stdio.h>
#include <stdlib.h>

int getRandomInteger(int minimum_, int maximum_);
void printWheelImage(int imageNumber_);
void printLosingGame(int imageNumber1_, int imageNumber2_, int imageNumber3_);
void printWinningGame(int imageNumber_);
void playGame(void);
int main(void);

int getRandomInteger(int minimum_, int maximum_)
{
    int randomInteger;
    randomInteger = minimum_ + rand() % (maximum_ - minimum_ + 1);
    return randomInteger;
}

void printWheelImage(int imageNumber_)
{
    switch (imageNumber_)
    {
        case 1:
            printf("Cherry");
            break;
        case 2:
            printf("Lemon");
            break;
        case 3:
            printf("Peach");
            break;
        case 4:
            printf("Bell");
            break;
        case 5:
            printf("7");
            break;
        case 6:
            printf("$");
            break;
        case 7:
            printf("Diamond");
            break;
        default:
            printf("Error: Invalid image number");
            break;
    }
}

void printLosingGame(int imageNumber1_, int imageNumber2_, int imageNumber3_)
{
    printWheelImage(imageNumber1_);
    printf("\t");
    printWheelImage(imageNumber2_);
    printf("\t");
    printWheelImage(imageNumber3_);
    printf("\t");
}

void printWinningGame(int imageNumber_)
{
    printLosingGame(imageNumber_, imageNumber_, imageNumber_);
    printf("YOU WIN!");
}

void playGame(void)
{
    int imageNumber1, imageNumber2, imageNumber3;
    imageNumber1 = getRandomInteger(1, 7);
    imageNumber2 = getRandomInteger(1, 7);
    imageNumber3 = getRandomInteger(1, 7);
    if (imageNumber1 == imageNumber2 && imageNumber2 == imageNumber3)
    {
        printWinningGame(imageNumber1);
    }
    else
    {
        printLosingGame(imageNumber1, imageNumber2, imageNumber3);
    }
}

int main(void)
{
    char playAgain;
    printf("Hit enter to play the slot machine. Any other key to quit.");

    while (scanf("%c", &playAgain) == 1 && playAgain == '\n')
    {
        playGame();
    }
    return 0;
}


