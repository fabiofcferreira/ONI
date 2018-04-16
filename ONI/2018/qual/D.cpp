/*
  Modifica este ficheiro para fazer a tua solucao do Problema D.

  Nao modifiques mais nenhum ficheiro.
*/

#include "avaliador.h"
#include <cstdio>

int types = 0;

void bs(int a, int b) {
  std::printf("Comparing index %d with %d\n", a, b);
  if(comparar(a,b)) { // same type
    bs(b, b + b/2);
  } else { // different type
    bs(a, b/2);
    types++;
  }
}

int resolver(int N, int Q) {
  // N number of bacterias
  // Q max number of corrector iterations

  int middle = N/2;

  bs(1, middle);
  /*
  for(int i = 1; i < N; i++) {
    if(comparar(i, i+1)) {
      //
    } else {
      k++;
    }
  }
  */

  return types+1;
}