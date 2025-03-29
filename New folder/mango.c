#include <stdio.h>

int main() {
    int  x , y , N ,BC;
    printf("enter total no of mangos N: \t");
    scanf("%d",&N);

    printf("enter no of mangoes given to friend x : \t");
    scanf("%d",&x);

    printf("enter no of mangoes ate by him self y : \t");
    scanf("%d",&y);

    BC  = N - (x+y);
    
    printf("no of balance mango : %d \t", BC);




}