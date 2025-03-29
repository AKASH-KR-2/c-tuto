#include <stdio.h>
int main() {

    int i=0;
    int f=0;

    printf("enter a number : \t");
    scanf("%d",&i);

    while (i>=0)
    {
        f = f+i;
        i --;
    }

    printf("sum of number %d",f);
    
}