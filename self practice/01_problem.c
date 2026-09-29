// #include <stdio.h>

// int main() {
//     int a = 10, b = 5, c = 2;

//     int result = a + b * c - 4;

//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 20, b = 5, c = 2;

//     int result = a / b + c * 3 - 1;

//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10, b = 20, c = 15;

//     int result = a < b && b > c;

//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10, b = 20, c = 30;

//     int result = a > b || b < c && a < c;

//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10, b = 5, c = 2;

//     int x = a + b * c;
//     int y = (a + b) * c;

//     printf("%d %d", x, y);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 5;

//     int result = ++a * 2 + a++;

//     printf("%d %d", result, a);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 5;
//     int b = a++;

//     printf("%d %d", a, b);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 5;
//     int b = ++a;

//     printf("%d %d", a, b);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10;

//     a += 5;
//     a *= 2;
//     a -= 4;
//     a /= 2;

//     printf("%d", a);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 20;

//     int result = a + 5 < b * 2;

//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 0;
//     int b = 10;

//     if (a && ++b) {
//         printf("TRUE");
//     }

//     printf("%d", b);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 0;
//     int b = 5;
//     int c = 10;

//     int result = a && ++b || ++c;

//     printf("%d %d %d", a, b, c);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     int result = a > b && ++a || b < c && ++b;

//     printf("%d %d %d %d", result, a, b, c);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 5;
//     int b = 10;
//     int c = 15;

//     int result = a++ + ++b * 2 > c && b < c || a == 6;

//     printf("%d %d %d %d", result, a, b, c);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 5;
//     int b = 10;

//     int result = a++ > 5 && ++b > 10 || a == 6;

//     printf("%d %d %d", result, a, b);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 2;
//     int b = 3;
//     int c = 4;

//     int result = ++a * b++ + c-- > 10 && a + b > c || b == 4;

//     printf("%d %d %d %d", result, a, b, c);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 0;
//     int b = 5;
//     int c = 10;

//     int result = a++ && ++b || c++ && ++a;

//     printf("%d %d %d %d", result, a, b, c);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a = 5;
//     int b = 10;
//     int c = 15;

//     int result =
//         a++ > 5 && ++b > 10 ||
//         c++ > 15 && ++a > 6 ||
//         b++ == 11;

//     printf("%d %d %d %d", result, a, b, c);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }

    return 0;
}