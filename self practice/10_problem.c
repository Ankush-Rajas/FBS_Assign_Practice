#include <stdio.h>

int isVowel(char);
int main()
{
    char ch = 'x';

    int x = isVowel(ch);

    if (x == 1)
    {
        printf("the character is Vowel");
    }
    else
    {
        printf("the character is consonent");
    }

    return 0;
}
int isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}