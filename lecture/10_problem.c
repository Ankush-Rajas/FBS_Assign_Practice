#include<stdio.h>


int main(){
    int no = 53687;
    int r, sum = 0;

    int num = no;

    while (no > 0)
    {
        r = no % 10;
        sum = sum + r;
        no = no/ 10;
    }

    printf("%d", sum);
    

    return 0;
}