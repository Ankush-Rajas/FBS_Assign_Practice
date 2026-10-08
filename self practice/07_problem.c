// Write a C program using a for loop to count how many digits are present in a given number.

#include <stdio.h>

int main()
{
    int number = 123;
    int digit, sum = 0;
    int count = 0;

    for (; number > 0;)
    {

        digit = number % 10;
        sum = sum * 10 + digit;
        number = number / 10;

        count++;
    }

    printf("%d\n", sum);

    printf("%d\n", count);

    return 0;
}