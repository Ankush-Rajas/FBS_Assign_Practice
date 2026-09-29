#include <stdio.h>

int main()
{

    int num = 40;
    int i = 2;
    

    while (i < num / 2)
    {
        // printf("%d\n", num);
        // printf("%d\n", i);
        // printf("before\n");

        if (num % i == 0)
        {
            printf("%d is not a prime number\n", num);
            // printf("%d\n", num);
            // printf("%d\n", i);
            break;
        }
        // printf("%d\n", num);
        // printf("%d\n", i);
        // printf("after\n");
        i++;

        if (i >= num / 2)
        {
            printf("%d is a prime number\n", num);
            break;
            
        }

    }
}