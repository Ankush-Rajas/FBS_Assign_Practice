#include <stdio.h>

int main()
{
    int num, result = 0;

    printf("enter the number: \n");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            result = result + 1;
        }
    }
    if (result == num)
    {
        printf("the number is perfect %d %d", num, result);
    }
    else
    {
        printf("no match");
    }

    return 0;
}