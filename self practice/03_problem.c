#include <stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("enter the number\n");

    scanf("%d", &number);

    int num = number;

    for (; number > 0;)
    {
        digit = number % 10;

        sum = sum * 10 + digit;

        number = number / 10;
    }

    if (num == sum)
    {
        printf("the value is pallindrome");
    }
    else
    {
        printf("the value is not pallindrome");
    }

    return 0;
}