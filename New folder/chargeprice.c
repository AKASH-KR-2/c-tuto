#include <stdio.h>

int main () {

    float a=0;
    float amt =0;

    printf("enter the no of unit consumed a: \t");
    scanf("%f",&a);

    if(a<=100)
    {
        amt = 0.5 * a;
        printf("total amout  : %.2f",amt);
    }

    else if (a<=200)
    {
        amt = (a - 100)*1 +100*0.5;
       printf("total amout:%.2f ",amt);
    }
    else
    {
        amt = (a-200)*3+(100*1)+(100*0.5);
        printf("total amount :%.2f",amt);
    }


}