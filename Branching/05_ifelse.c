// Vowel or consonant using if else

#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character ");
    scanf("%c", &c);

    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("vowel\n");
    }

    else
    {
        printf("consonant\n");
    }
}