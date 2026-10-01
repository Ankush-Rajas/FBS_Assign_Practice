#include <stdio.h>

int main()
{
    int num = 1634;
    int count = 0, sum = 0, remain;
    int temp = num;

    while (num > 0)
    {

        count++;
        num = num / 10;
    }

    num = temp;

    while (num > 0)
    {
        remain = num % 10;

        int res = 1;
        int i = 1;

        while (i <= count)
        {
            res = res * remain;

            i++;
        }

        sum = sum + res;

        num = num / 10;
    }

    int number = temp;

    if (number == sum)
    {
        printf("the number is armstrong value %d", number);
    }
    else
    {
        printf("the number is not armstrong value %d", number);
    }

    return 0;
}