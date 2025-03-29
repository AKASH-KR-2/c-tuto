#include <stdio.h>

int main (){

    int x;

    printf("enter the no of mango X  \t");
    scanf("%d",&x);

    if(x>20)
    {
    
        
        printf("total mango  %d,\t",x+3);
    }
    else if (x>10)
    {
        printf("total mango %d,\t",x+1);
    }
    else
        printf("total mango %d,\t",x);
}