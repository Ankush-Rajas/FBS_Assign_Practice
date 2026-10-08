#include <stdio.h>

int swap (int* , int*);
int main() {
    int a = 10 , b = 20;
    printf("before swap a = %d , b = %d\n", a ,b );
    
    swap(&a, &b);
    printf("after swap a = %d , b = %d", a ,b );

    return 0;
}

int swap(int* a , int* b){
    
    int temp = *a;

    *a = *b;
    *b = temp;
}