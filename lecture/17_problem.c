#include <stdio.h>


int add();
int main() {
    
    int x = add();

    printf("the number of addition is %d", x);

    return 0;
}

int add(){
    int a = 20 ;
    int b = 40 ;

    int c = a + b;
    printf("the addition is %d", c);
    return c;
}