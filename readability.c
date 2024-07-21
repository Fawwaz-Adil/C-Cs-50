#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int lettercount = 0;
    int wordcount = 0;
    int sentencecount = 0;
    float L = 0;
    float S = 0;
    float index = 0;

    string text = get_string("Enter text: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            lettercount++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentencecount++;
        }
        else if (text[i] == ' ' || text[i] == '\n')
        {
            wordcount++;
        }
    }
    wordcount++;

    L = ((float) lettercount / wordcount) * 100;

    S = ((float) sentencecount / wordcount) * 100;

    index = (0.0588 * L) - (0.296 * S) - 15.8;

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", round(index));
    }
    return 0;
}
