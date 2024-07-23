#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    //initialise scores of 2 players as 0
    int score1 = 0;
    int score2 = 0;

    //prompt user for 2 inputs as string
    string choice1 = get_string("Player 1 please enter your word: ");
    string choice2 = get_string("Player 2 please enter your word: ");

    //capitalise all letters of both strings within the loops in which you're comparing the answers

    for (int i=0; i<strlen(choice1); i++)
    {
        choice1[i] = toupper(choice1[i]);
        if (choice1[i] == 'A' || choice1[i] == 'E' || choice1[i] == 'I' || choice1[i] == 'O' || choice1[i] == 'U' || choice1[i] == 'R' || choice1[i] == 'S' || choice1[i] == 'T' || choice1[i] == 'L' || choice1[i] == 'N')
        {
            score1++;
        }

        if (choice1[i] == 'D' || choice1[i] == 'G')
        {
            score1 = score1 + 2;
        }
        if (choice1[i] == 'B' || choice1[i] == 'C' || choice1[i] == 'M' || choice1[i] == 'P')
        {
            score1 = score1 + 3;
        }
        if (choice1[i] == 'F' || choice1[i] == 'H' || choice1[i] == 'V' || choice1[i] == 'W' || choice1[i] == 'Y')
        {
            score1 = score1 + 4;
        }
        if (choice1[i] == 'K')
        {
            score1 = score1 + 5;
        }
        if (choice1[i] == 'J' || choice1[i] == 'X')
        {
            score1 = score1 + 8;
        }
        if (choice1[i] == 'Q' || choice1[i] == 'Z')
        {
            score1 = score1 + 10;
        }
    }

    for (int j=0; j<strlen(choice2); j++)
    {
        choice2[j] = toupper(choice2[j]);
        if (choice2[j] == 'A' || choice2[j] == 'E' || choice2[j] == 'I' || choice2[j] == 'O' || choice2[j] == 'U' || choice2[j] == 'R' || choice2[j] == 'S' || choice2[j] == 'T' || choice2[j] == 'L' || choice2[j] == 'N')
        {
            score2++;
        }

        if (choice2[j] == 'D' || choice2[j] == 'G')
        {
            score2 = score2 + 2;
        }
        if (choice2[j] == 'B' || choice2[j] == 'C' || choice2[j] == 'M' || choice2[j] == 'P')
        {
            score2 = score2 + 3;
        }
        if (choice2[j] == 'F' || choice2[j] == 'H' || choice2[j] == 'V' || choice2[j] == 'W' || choice2[j] == 'Y')
        {
            score2 = score2 + 4;
        }
        if (choice2[j] == 'K')
        {
            score2 = score2 + 5;
        }
        if (choice2[j] == 'J' || choice2[j] == 'X')
        {
            score2 = score2 + 8;
        }
        if (choice2[j] == 'Q' || choice2[j] == 'Z')
        {
            score2 = score2 + 10;
        }
    }

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}
