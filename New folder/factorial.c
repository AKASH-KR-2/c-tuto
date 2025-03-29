#include <stdio.h>
int main() {
    int i;
    int f=1;

    printf("enter a number :\t");
    scanf("%d",&i);

    while (i > 0)
    {
        f = f * i;
        i --;
    }
    
    printf("factorial is %d", f);
}