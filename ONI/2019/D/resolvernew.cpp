/*
  Modifica este ficheiro para fazer a tua solucao do Problema D.

  Nao modifiques mais nenhum ficheiro.
*/

#include "avaliador.h"

int _N, _T, _S;

// array for possible sensors
int sensors[MAXN];
int numSensors = 0;
int balance = 0;
int res;
int run = 0;
//int firstSensors[MAXN];

void iniciar(int N, int T, int S)
{
  _N = N;
  _T = T;
  _S = S;
}

int prever(int previsoes[MAXN], int A) {
  if(_S == 1) {
    // first part

    if(run == 0) {
      // save positive and negative sensors 
      for(int i = 0; i < _N; i++) {
        if(previsoes[i] == 1) balance++;
        else balance--;

        sensors[i] = previsoes[i];
      }

      numSensors = _N;
      run++;
    }

    if(A != -1) { // check if this is the first day
      // A = 1 -> it rained
      // A = 0 -> it didn't rain

      for(int i = 0; i < _N; i++) {
        if(sensors[i] != A) {
          if(sensors[i] == 1) balance--;
          else balance++;

          numSensors--;
          sensors[i] = -1;
        }
      }

      if(numSensors == 1) {
        for(int i = 0; i < _N; i++) {
          if(sensors[i] != -1) {
            res = previsoes[i];
          }
        }
      }
    }

    if(balance > 0) res = 1;
    else if (balance < 0) res = 0;
    else res = 0;

    // if(A == 1) res = 0;
    // else res = 1;

  } else if(_S == 2) {
    // second part
  }

  return res;
}