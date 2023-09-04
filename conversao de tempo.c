#include <stdio.h>

int main(){
int T;
int H;
int M;
int S;  

  scanf("%d", &T);
  H = T / 3600;
  M = (T - H*3600)/60;
  S = T - 3600*H-M*60;

  printf("%d:%d:%d\n", H, M, S); 
    
    return 0;
}
