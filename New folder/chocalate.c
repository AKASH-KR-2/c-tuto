#include<stdio.h>
int main ()  {

    int M , N , T , B;

    printf("Enter the no of chocalate N : \t");
    scanf("%d",&N);

    
    printf("Enter the no of students M : \t");
    scanf("%d",&M);

    T = N/M;
    printf("no of choclate each student get : %d, \t",T);

    B = N % M;

    printf("no of choclate will balance : %d, \t",B);

}