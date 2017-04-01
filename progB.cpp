#include <cstdio>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n = 0,
        q = 0,
        a = 1,
        b = 1;
    long x1, x2, y1, y2, xi;
    scanf("%d %d", &n, &q);
    int pos[100000] = {};

    queue<int> Qpedidos;

    for(; a <= n; a++) {
      scanf("%li %li %li %li", &x1, &y1, &x2, &y2);
      for(b = x1; b < x2; b++) {
          pos[b] += (y2 - y1);
      }
    }

    for(b = q; b; b--) {
      scanf("%li", &xi);
      Qpedidos.push(xi);
    }

    for(b = q; b; b--) {
      printf("%d\n", pos[Qpedidos.front()]);
      Qpedidos.pop();
    }

    return 0;
}
