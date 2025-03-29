#include <stdio.h>

int main () {

    int n=0;
    printf("enter a number b/w 1 to 7 n :\t");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
            printf("monday \n");
            break;
        case 2:
            printf("tusday \n");
            break;
        case 3:
            printf("wenesday \n");
            break;
        case 4: 
            printf("thursday \n");
            break;
        case 5:
            printf("friday \n");
            break;
        case 6:
            printf("saturday \n");
            break;
        case 7:
            printf("sunday \n");
            break;
        default:
            printf("invalid option");
            break;
    }
}