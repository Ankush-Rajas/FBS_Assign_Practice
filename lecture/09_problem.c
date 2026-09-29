#include<stdio.h>


int main(){
    int num = 53687;

    int n1,n2,n3,n4,n5, t1,t2,t3,t4, sum;

    n1 = num % 10;
    t1 = num/10;
    n2 = t1 % 10;
    t2 = t1/ 10;
    n3 = t2 % 10;
    t3 = t2 / 10;
    n4 = t3 % 10;
    t4 = t3 / 10;
    n5 = t4 % 10;
    
    sum = n1+ n2+ n3+ n4 + t4;

    printf("%d %d %d %d %d %d ", sum, n1 , n2 , n3, n4,n5, t4 );


    return 0;
}