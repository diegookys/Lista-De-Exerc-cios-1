#include <stdio.h>

int main(){
    
    // r= raio
    // a= area
    // pi
    
    double r;
    double a;
    double pi=3.14159;
    
    scanf ("%lf", &r);
    a = pi * (r *r);
    printf ("A=%.4lf\n",a);

    return 0;
}