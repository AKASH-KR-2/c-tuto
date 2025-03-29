#include <stdio.h>

int main (){

    int num = 0;

    printf("enter a number num:\t");
    scanf("%d",&num);

    if(num%2==0)
    {
      printf("%d is  even number",num);
    }
    else
    {
        printf("%d is odd number",num);
    }

}