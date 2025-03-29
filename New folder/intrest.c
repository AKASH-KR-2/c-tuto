# include <stdio.h>

int main() {
    int p,r,t,si;

    printf("enter amount to deposite p: \n");
    scanf("%d",&p);

    printf("enter the rate of intrest r: \n");
    scanf("%d",&r);

    printf("enter the no year to deposite t: \n");
    scanf("%d",&t);

    si = p * r * t / 100;

    printf("the simple intrest is :%d \t", si);



}
