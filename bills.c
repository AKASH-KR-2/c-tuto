#include <stdio.h>
#include <conio.h>

int main () {

    int a = 0;
    float b = 0;
    float c = 0, new_amt = 0.0;
    int flag = 0;

    printf("enter the number of product a:\t ");
    scanf("%d", &a);

    int dump = a;

    while (a > 0)
    {
        printf("enter the price of product : \t");
        scanf("%f", &b);
        c = c + b;
        a --;
    }

    if (dump >= 3)
    {
        if (c > 100)
        {
            new_amt = c-20;
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("total price of product : %.2f \t", c);
        printf("\nthe sub total amount is :%.2f \t",new_amt);
    }
    else
    {
        printf("total price of product : %.2f \t", c);
    }
    

    printf("\npress enter to exit.... ");
    getch();


    return 0;
}

// git remote add origin https://github.com/AKASH-KR-2/c-tuto.git
// git branch -M main
// git push -u origin main