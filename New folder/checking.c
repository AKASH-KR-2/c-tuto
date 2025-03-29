#include <stdio.h>

int main (){

    int speed;
    printf("enter the speed of vehicle : \t");
    scanf("%d",&speed);

    if(speed<=60)
    {
        printf("safe driving");
    }
    else if (speed<=80)
    {
        printf("warning");

    }
    else
        printf("over speeding ! fine ₹ 5000");
    


}