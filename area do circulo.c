#include <stdio.h>

int main(void){
    
    // r= raio
    // a= area
    // PI= π
    
    double raio, area,PI=3.14159;
    
    scanf ("%lf",&raio);
    area = PI * (raio *raio);
    printf ("A=%.4lf\n",area);

    return 0;
}
