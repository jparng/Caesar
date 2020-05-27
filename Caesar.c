#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    if (argc == 2 && isdigit(*argv[1]))
    {

        string s = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, n = strlen(s); i < n; i++)
        {   int key = atoi(argv[1]);

            if(s[i] >= 'a' || s[i] <= 'z') //checks if text is lowercase
                 {

                printf("%c", (((s[i] - 'a') + key) % 26)+ 'a');
                 }
             else if(s[i] >= 'A' && s[i] <= 'Z') //checks if text is uppercase
             {
            printf("%c", (((s[i] - 'A') + key) % 26) + 'A');

                 }
        else{
            printf("%c", s[i]);
        }
        }
    printf("\n");
    return 0;

    }
    else
      {
        printf("Usage: ./caesar key\n");
        return 1;
     }



}

//atoi function converts a string to a number
