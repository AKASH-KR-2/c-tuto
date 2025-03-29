#include <stdio.h>

int main (){

    int num = 0;
    printf("enter a number num : \t");
    scanf("%d",&num);
    if (num%5 == 0)
    {
        printf("%d is divisible by 5", num);
    }
    else
    {
        printf("%d is not divisible by 5");
    }
}