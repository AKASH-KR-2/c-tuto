#include <stdio.h>

int main() {

    char gender = 'm';

    switch(gender) 
    {
        case 'm':   printf("gender is male");
                    break;

        case 'f':  printf("gender is female");
                    break;

        default: printf("invalid option");
    }
    
    
}