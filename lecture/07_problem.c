#include <stdio.h>

int main()
{
    int marks = 45;

    if (marks >= 75)
    {
        printf("A+");
    }
    else
    {
        if (marks >= 65)
        {
            printf("B+");
        }
        else
        {
            if (marks >= 55)
            {
                printf("C+");
            }
            else
            {
                if (marks >= 45)
                {
                    printf("D+");
                }
                else
                {
                    if (marks >= 35)
                    {
                        printf("pass");
                    }
                    else
                    {
                        printf("fail");
                    }
                }
            }
        }
    }

    return 0;
}