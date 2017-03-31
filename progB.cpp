#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n = 0,
        q = 0,
        a = 1,
        b = 1;
    long x1, x2, y1, y2;
    int pos[q+1] = {0};

    scanf("%d %d", &n, &q);
    //vector< vector<long> >charcos(n+1);
    vector<int> Qpedidos(q+1);
    
    for(; a <= n; a++) {
      scanf("%li %li %li %li", &x1, &y1, &x2, &y2);
      /*
      charcos[i].push_back(x1);
      charcos[i].push_back(x2 - x1);
      charcos[i].push_back(y2 - y1);
      */
      for(b = x1; b < x2; b++) {
          printf("Q = %d\n", b);
          printf("Before: %d\n", pos[b]);
          printf("Altura a adicionar: %li\n", (y2 - y1));
          pos[b] += (y2 - y1);
          printf("After: %d\n", pos[b]);
      }
    }
    return 0;
}
