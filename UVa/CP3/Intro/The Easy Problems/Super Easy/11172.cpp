#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int numT = 0, fnum = 0, snum = 0;

  cin >> numT;
  char results[numT];

  for(int i = 0; i < numT; i++) {
    cin >> fnum >> snum;

    fnum > snum ? results[i] = '>' : results[i] = '<';
  
    if (fnum == snum) results[i] = '=';
  }

  for(int i = 0; i < numT; i++) cout << results[i] << '\n';

  return 0;
}