#include <iostream>
#include <stdlib.h>
#include "avaliador.h"

bool correct = false;
int n, t, s, q, contador;
int previsao[MAXT][MAXN], atual[MAXT];

void end(int type = 0)
{
  if (correct)
    cout << "Correto! Falhaste " << contador << " previsoes de um maximo de " << q << endl;
  else
  {
    if (type == 0)
      cout << "Incorreto, falhaste " << contador << " previsoes de um maximo de " << q << " ..." << endl;
    else
      cout << "Incorreto, input invalido..." << endl;
  }
  exit(0);
}

int main()
{
  cin >> n >> t >> s >> q;

  if (n < 1 || n > MAXN)
    end(1);

  if (t < 1 || t > MAXT)
    end(1);

  if (s < 1 || s > 2)
    end(1);

  for (int i = 0; i < t; i++)
    for (int j = 0; j < n; j++)
      cin >> previsao[i][j];

  for (int j = 0; j < t; j++)
    cin >> atual[j];

  contador = 0;
  iniciar(n, t, s);

  int atual_anterior = -1;
  for (int i = 0; i < t; i++) {
    if (prever(previsao[i], atual_anterior) != atual[i])
      contador++;

    atual_anterior = atual[i];
  }
  
  correct = contador <= q;
  end();

  return 0;
}