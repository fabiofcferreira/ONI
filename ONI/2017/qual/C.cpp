#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
  int a, b, nc, el;
  scanf("%d", &nc);
  int first[nc+1];
  memset(first, 0, (nc+1)*sizeof(int));
  int second[nc+1];
  memset(second, 0, (nc+1)*sizeof(int));

  for(a = 1; a<nc+1; a++) {
    scanf("%d", &el);
    first[a] = el;
  }
  sort(first, first+nc+1);

  for(a = 1; a<=nc; a++) {
    second[a] = 1;
    for(b = 1; b<=a-1; b++) {
      if(first[a] % first[b] == 0) second[a] = max(second[a], second[b]+1);
    }
  }
  sort(second, second+nc+1);
  printf("%d\n", second[nc]);
  return 0;

}
