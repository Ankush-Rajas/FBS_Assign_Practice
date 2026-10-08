// Write a C program using a for loop to find the factorial of a given number.

#include <stdio.h>

int main()
{
    int number = 5, result = 1;

    for (int i = 1; i <= number; i++)
    {
        result = result * i;
    }
    printf("%d", result);

    return 0;
}