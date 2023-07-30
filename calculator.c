#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
        // Be användaren om sitt namn
     string name = get_string("Vad heter du?: ");

    if (strcmp(name, "Miki") == 0)
    {
        // Visa 'korrekt' svar
        printf("Hej, %s, du är en beast\n", name);
    }
    else
    {
        // Visa 'inkorrekt' svar
        printf("Hej, %s, du är inte en beast lmao!\n", name);
    }
    return 0;
}