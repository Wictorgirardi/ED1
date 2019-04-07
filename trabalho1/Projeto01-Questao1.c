#include <stdio.h>
#include <stdlib.h>

int *fneuronio(int *entradas, int *pesos, int *T, int n);

int main(int argc, char *argv []){
    int entradas[10], pesos[10], T,resultado;
   
    printf("Digite as 10 entradas:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d Entrada:\n", i+1);
        scanf("%d",&entradas[i]);
    }
    
    printf("Digite os 10 pesos:\n");
    for(int y = 0; y < 10; y++)
    {
        printf("%d Peso:\n", y+1);
        scanf("%d",&pesos[y]);
    }
    
    printf("Digite o limiar T:\n");
    scanf("%d", &T);

    fneuronio(entradas, pesos,&T, 10);
    resultado = fneuronio(entradas, pesos,&T, 10);
    if(resultado==1){
        printf("Neurônio ativado!\n");
    }
    else 
        printf("Neurôno inibido!\n");

   
    return 0;
}

int *fneuronio(int *entradas, int *pesos, int *T, int n){

int somap = 0, x;
int *ativado;
for(int i = 0; i < n; i++)
{
    somap = (entradas[i]*pesos[i]) + somap;
}
    if (somap > *T) {
       x = 1;
       ativado = x;
       return(ativado);
    }
    else
       x = 0;
       ativado = x;
       return(ativado);
}
