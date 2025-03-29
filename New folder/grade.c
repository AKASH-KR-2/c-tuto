#include <stdio.h>

int  main () {

    int m=0, p=0, c=0 , total = 0;

    printf("enter the mark of maths m : \t");
    scanf("%d",&m);

    printf("enter the mark of physics p : \t");
    scanf("%d",&p);

    printf("enter the mark of chemistry c : \t");
    scanf("%d",&c);

    total = m + p + c;

    if(total>=100)
        printf("he got A+");

    else if (total>=50)
        printf("he got b+");

    else
        printf("he failed");


}