#include <stdio.h>

int main(void) {
    
    int a;
    int b;
    int c;
    int d;
    int diferenca;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    diferenca = (a*b)-(c*d);
    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
