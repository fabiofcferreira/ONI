#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  int n = 0,
      q = 0,
      i = 0;
  long x0, x1, x2, y1, y2;

  scanf("%d %d", &n, &q);
  vector< vector<long> > charcos(n, vector<long>(0));

  for(i = 0; i <= n-1; i++) {
    scanf("%li %li %li %li", &x1, &x2, &y1, &y2);
    charcos[i].push_back(x1);
    charcos[i].push_back(x2);
    charcos[i].push_back(y1);
    charcos[i].push_back(y2);
  }
  sort(charcos.begin(), charcos.end());

  for(i = q; i > 0; i--) {
    scanf("%li", &x0);

    int a = 0, b = n;
    while(a <= b) {
      int k = (a+b)/2;
      if(charcos[k][0] == x0) {
        // found rect
        break;
      }
      if(charcos[k][0] > x0) b = k-1;
      else a = k + 1;
    }

  }

  return 0;
}
