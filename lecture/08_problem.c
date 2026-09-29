#include<stdio.h>


int main(){
    char ch = '9';

    if (ch >= 'A' && ch <= 'Z' )
    {
        printf("the character is Uppercase");

    }else if (ch >= 'a' && ch <= 'z')   
    {
        printf("the character is Lowercase");
    }else {
        printf("the character is constant");
    }

    return 0;
}