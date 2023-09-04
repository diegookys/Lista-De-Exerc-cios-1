#include <stdio.h>

int main(){
int N;
int ano;
int mes;
int dia;

scanf("%d", &N);
ano = N/365;
mes = (N - ano*365)/30;
dia = N - ano*365 - mes*30;

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    
    return 0;
}
