#include <cstdio>
#include <ctype.h>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {

    int n = 0,
        b = 0,
        i = 0,
        p = 0,
        maxD = 0,
        minE = 0;
    char d;

    scanf("%d %d %d", &n, &b, &i);
    b -= 1;
    minE = maxD = b;
    char arcas[n];
    scanf(" %s", arcas);

    for(; i > 0; i--) {
        scanf(" %c %d", &d, &p);

        if(d=='E') {
          minE = min(minE, b-p);
          b -= p;
        } else {
          maxD = max(maxD, b+p);
          b += p;
        }
    }

    for(i = 0; minE <= maxD; minE++) {
      if(arcas[minE] == 'T') {
        i++;
      }
    }

    printf("%d\n", i);
    return 0;
}
