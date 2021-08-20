
#include "functions.h"
#include<stdlib.h>

#include<string.h>

void numero_vogais(char texto[]){

  int a=0,e=0,i=0,o=0,u=0;
  while(texto!='\n'){

    if(texto=='a'||texto=='A'){
      a++;
    {
    else if (texto=='e'||texto=='E'){
      e++;
    }
    else if (texto=='i'||texto=='I'){
      i++;
    }
    else if (texto=='o'||texto=='O'){
      o++;
    }
    else if (texto=='u'||texto=='U'){
      u++;
    }

  }
printf("A = %d\n",a);
printf("E = %d\n",e);
printf("I = %d\n",i);
printf("O = %d\n",o);
printf("U = %d\n",u); 

   
}
