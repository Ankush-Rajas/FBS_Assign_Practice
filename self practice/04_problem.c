// Write a C program using a for loop to check whether a given number is prime or not.

#include <stdio.h>

int main()
{
    int number = 6;
    int isPrime = 1;

    if (number < 2)
    {
        isPrime = 0;
    }
    
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the numeber is not prime");
    }

    return 0;
}