#include<stdio.h>


int main(){
    int b = 2016;

    if ( b % 4 == 0 && b % 100 !=0 || b % 400 ==0)
    {
        printf("the year is leap");

    }else{
        printf("the year is not leap");
    }

    return 0;
}