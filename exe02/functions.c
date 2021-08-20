
#include "functions.h"

int menor(int v[], int n){
    int lowest=v[0];
    for(int i=0;i<n;i++){
      if(v[i]<lowest){
        lowest=v[i];
      }

    }
    return lowest;
}
