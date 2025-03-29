#include <stdio.h>

int main() {

    int a;
    printf("enter any number a : \t");
    scanf("%d",&a);

    if(a<0)
    {
        printf("%d  is a negative number",a);
    }
    else if (a>0)
    {
        printf("%d  is a positive number", a);
    }
    else
    {
        (a=0);
        printf("%d  is zero",a);
    }
}