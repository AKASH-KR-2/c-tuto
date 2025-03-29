#include <stdio.h>

int main () {
    for (int i = 1; i <= 30; i++)
    {
        if (i % 15 == 0)
        {
            printf("Hero Boss %d \n", i);
        }

        else if (i % 5 == 0)
        {
            printf("Hero  %d\n", i);
        }

        else if (i % 3 == 0) {
            printf("Boss %d \n", i);
        }

        // else {
        //     printf("%d", i);
        // }
        
        
    }
    
}