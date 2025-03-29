#include <stdio.h>

int main() 
{
    int a, b, temp;

    printf("set value to a: \t");
    scanf("%d", &a);

    printf("set value to b: \t");
    scanf("%d", &b);

    printf("before swapping a: %d, b: %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("after swapping a: %d, b: %d", a, b);
}