#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

int main(void)
{

    char string1 [100];
    char string2 [100];

    string s = get_string("Skriv vad du vill med små bokstäver och vinn 100kr: ");

    for (int i = 0; s[i] != '\0'; i++)
    {
        string1[i] = toupper(s[i]);
    }
    string1[strlen(s)] = '\0';

    printf("Du skrev: %s\n", string1);
    sleep(2);
    printf("Vill du försöka igen?\n");

    char c = get_char("'y' for YES, 'n' for NO: ");
    if (c == 'y' || c == 'Y')
    {
            string s2 = get_string("Skriv vad du vill med små bokstäver och vinn 100kr: ");

            for (int i = 0; s2[i] != '\0'; i++)
        {
            string2[i] = toupper(s2[i]);
        }
            printf("Du skrev: %s\n", string2);
            sleep(2);
            printf("Bra försök lmao\n");
        }
    else printf("Klokt val, kiddo\n");
}