#include <stdio.h>

int main () {


    float a,b;
    int c;


    printf("enter the first number  : \t");
    scanf("%d",&a);


    
    printf("enter the second number : \t");
    scanf("%d",&b);

    printf("select a number b/w 1 to 4 \n");

    printf( " 1-> addition  \n 2-> subsdtraction \n 3-> multiplication \n 4-> division  ");

    scanf("%d",&c);

    switch (c)
    {
    case 1:
        printf(" sum of number is : %d", a+b);
        break;
        
    case 2:
        printf(" subtraction of number is : %d", a-b);
        break;

    case 3:
        printf(" multiplication of number of number is : %d", a*b);
        break;

    case 4:
        printf(" division  of number is : %d", a/b);
        break;

    default:
        printf("invalid option");
        break;
    }

}
