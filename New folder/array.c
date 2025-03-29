#include <stdio.h>

int main() {
    int size;
    int marks[size];

    printf("enter a array size: \t");
    scanf("%d", &size);
    // input
    for (int i = 0; i < size; i++)
    {
        printf("enter a value to marks[%d]", i);
        scanf("%d", &marks[i]);
    }
    // output
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", marks[i]);
    }

    printf("%d", marks[0] + marks[1]);
    

    return 0;
}