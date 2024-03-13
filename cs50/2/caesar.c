#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void rotate(int key, string plaintext);

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (key < 1 || isdigit(key != 1))
    {
        printf("Usage: ./caesar key\n");
        return 2;
    }
    else
    {
        string plaintext = get_string("plaintext: ");
        rotate(key, plaintext);
    }
    printf("\n");
    return 0;
}

void rotate(int key, string plaintext)
{
    printf("ciphertext: ");

     for (int i = 0, n = strlen(plaintext); i < n; i++)
     {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                char x = ((plaintext[i] - 65 + key) % 26) + 65;
                printf("%c", x);
            }
            else if (islower(plaintext[i]))
            {
                char x = ((plaintext[i] - 97 + key) % 26) + 97;
                printf("%c", x);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
}