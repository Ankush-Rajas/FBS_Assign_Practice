// Write a C program using a for loop to print the multiplication table of a given number.

#include <stdio.h>

int main() {
    int number = 5;
    int result;

    for (int i = 1; i <= 10; i++)
    {
        result = number * i;

        printf("\n");

        printf("the multiplication is %d and %d = %d\n", number , i , result);

    }

    printf("%d\n" , result);

    return 0;
}




// #include <stdio.h>

// int main()
// {

//     int num = 5;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n ", num, i, num * i);
//     }

//     return 0;
// }