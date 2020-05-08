#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    if ((argc == 2) && (strlen(argv[1]) == 26))
    {
        for(int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
            for(int j = 0; j < strlen(argv[1]); j++)
            {
                if ((argv[1][i] == argv[1][j]) && (i !=j))
                {
                    return 1;
                }

            }
        }


        string plain_text = get_string("plaintext: ");
        int l = strlen(plain_text);
        char cipher_text[l];
        printf("%d\n", l);
        printf("%lu\n", strlen(cipher_text));
        int k;
        for (k = 0; k < l; k++)
        {
            if(isupper(plain_text[k]))
            {
                cipher_text[k] = toupper(argv[1][plain_text[k] - 'A']);
                continue;
            }
            else if(islower(plain_text[k]))
            {
                cipher_text[k] = tolower(argv[1][plain_text[k] - 'a']);
                continue;
            }
            else
            {
                cipher_text[k] = plain_text[k];
                continue;
            }
        }
        cipher_text[k] = '\0';

        for (int j = 0; j < strlen(cipher_text); j++)
        {
            printf("%c\n", cipher_text[j]);
            continue;
        }


        printf("ciphertext: %s\n", cipher_text);
        return 0;

    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

}
