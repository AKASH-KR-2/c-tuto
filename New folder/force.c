# include <stdio.h>
int main () {
    int  m, v, r, f;

    printf("input the mass of object m: \t ");
    scanf("%d",&m);

    printf("input the velocity of object v: \t ");
    scanf("%d",&v);
    
    printf("input the length of radius r: \t ");
    scanf("%d",&r);

    f = m * v * v / r;
    printf("the centripital force =%d \t", f);

}
