#include <stdio.h>

int main () {

    int rem = 0, rev = 0;
    int num;

    printf("enter a number :\t");
    scanf("%d",&num);

    while (num>0)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    
    printf("reverse %d",rev);
}
