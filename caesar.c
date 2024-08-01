#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// for converting string to a number: atoi
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int i = 0;

    do
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        i++;
    }
    while (i < strlen(argv[1]));

    int key = atoi(argv[1]);

    string text = get_string("Plain text:  ");
    char ciphertext[strlen(text) + 1];

    for (int j = 0; j < strlen(text); j++)
    {
        if (isalpha(text[j]))
        {
            if (isupper(text[j]))
            {
                ciphertext[j] = (((text[j] - 'A' + key) % 26) + 'A');
            }
            else if (islower(text[j]))
            {
                ciphertext[j] = (((text[j] - 'a' + key) % 26) + 'a');
            }
        }
        else
        {
            ciphertext[j] = text[j];
        }
    }
    ciphertext[strlen(text)] = '\0';
    printf("ciphertext: %s\n ", ciphertext);
    return 0;
}
