#include <stdio.h>
#include "functions.h"

int main() {

    int n, b, s;
  
  // ENTRADA DE DADOS
  
  scanf("%i", &n);
  int vet[n];
  for(int i=0;i<n;i++){
     scanf("%i", &vet[i]);
     
  }
  int menor=vet[0], maior=vet[0];
  menor_maior( vet,  n,  &menor,  &maior); 

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %i",maior);

  return(0);
}