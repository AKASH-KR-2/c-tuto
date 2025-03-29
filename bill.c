#include <stdio.h>

int main () {

    int a =0;
    float b =0;
    float c =0;

    printf("enter the number of product a:\t ");
    scanf("%d",&a);

    int dump = a;

    while (a>0)
    {
        printf("enter the price of product : \t");
        scanf("%f",&b);
        c=c+b;
        a--;
    }
    
    printf("total price of product : %.2f \t",c);

    if (dump >= 3)
    {
        if (c>100)
        {
            c=c-20;
            printf("\nthe sub total amount is :%.2f \t",c);
        }
        
    }
        

}