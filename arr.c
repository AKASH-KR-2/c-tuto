#include <stdio.h>

int main() {
    int a[4];

    // value adding to array using index a[index] = value;
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;

    printf("[%d] ", a[0]);
    printf("[%d] ", a[1]);
    printf("[%d] ", a[2]);
    printf("[%d]", a[3]);

    printf("\nArray printing in loop => ");

    for (int i = 0; i < 4; i++)
    {
        printf("[%d] ", a[i]);
    }
    

    return 0;
}