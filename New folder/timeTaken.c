#include <stdio.h>
int main() {

    int X,S,T;

    printf("enter the distance to be travel X :\t");
    scanf("%d",&X);

    printf("speed to be travelled s :\t");
    scanf("%d",&S);

    T = X / S;
    printf("time taken to travel :%d ,\t" , T );

}