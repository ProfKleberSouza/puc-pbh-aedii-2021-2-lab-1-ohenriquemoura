#include <stdio.h>
#include "functions.h"

int main() {

  int n,m;
  
  // ENTRADA DE DADOS
  scanf("%i", &n);
  int vet[n];
  for(int i=0;i<n;i++){
     scanf("%i", &vet[i]);
     
   } 

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  m = menor(vet, n);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", m);

  return(0);
}