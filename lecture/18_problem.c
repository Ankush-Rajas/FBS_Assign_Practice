#include <stdio.h>

int evenOdd();
int main()
{
    // int x = evenOdd();

    if (evenOdd()) // same as like evenOdd() == 1
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }

    return 0;
}

int evenOdd()
{
    int a = 20;

    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}