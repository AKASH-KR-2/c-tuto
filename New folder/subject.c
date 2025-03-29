#include <stdio.h>

int main() {
    int m,p,c,sum,avg;

    printf("enter mark of maths m:\t");
    scanf("%d", &m);

    printf("enter mark of physics p:\t");
    scanf("%d", &p);

    printf("enter mark of chemistry c:\t");
    scanf("%d", &c);

    sum = m + p + c;

    printf("Total:%d \t", sum);

    avg = sum/3;
    printf("Average:%d \t", avg);


}