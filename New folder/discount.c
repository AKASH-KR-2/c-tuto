#include <stdio.h>
int main (){

    int x =0 ,y=0;
    float t=0;
    float new_amt = 0.0;

    printf("enter the no of book x :\t");
    scanf("%d", &x);

    printf("enter the no of pen y :\t");
    scanf("%d", &y);

    // Book per rate rs.20
    // Pen per rate rs.10

    t = x * 20 + y * 10;

    printf("Book amount (x%d): %d \t", x , x*20);
    printf("Pen amount (x%d): %d \t", y , y*10);
    
    if (t>=65)
    {
        new_amt = t * 2/100;
        new_amt = t - new_amt;

        printf("Discount Amout: %.2f", new_amt);
    }
    else 
    {
        new_amt = t;
        printf("Amout: %f", new_amt);
    }

}