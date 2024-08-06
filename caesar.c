#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
   // If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
     if (argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //If any of the characters of the command-line argument is not a decimal digit,
    for (int i = 0; i < strlen(argv[1]); i++ )
    {
        if (!isdigit(argv[1][i]))
        {
           printf("Usage: ./caesar key\n");
            return 1;
        }
    }
         // Convert argv[1] from a `string` to an `int`
        int k = atoi(argv[1]);
      // Prompt user for plaintext
        string p = get_string("plaintext:  ");
        printf("Ciphertext: ");
        for (int j = 0; j < strlen(p); j++)
        {           // Rotate the character if it's a letter
            if (isupper(p[j])){
            printf("%c", (p[j] - 65 + k) % 26 + 65);
            }
            else if (islower(p[j])){
                printf("%c", (p[j] - 97 + k) % 26 + 97);
            }
            else
            {
                printf("%c",p[j]);
            }
        }
            printf("\n");


}
