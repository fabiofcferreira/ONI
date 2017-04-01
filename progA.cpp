#include <cstdio>
#include <ctype.h>

int main() {

    int n = 0,
        b = 0,
        i = 0,
        p = 0,
        t = 0;

    scanf("%d %d %d", &n, &b, &i);
    b -= 1;
    char arcas[n];
    scanf(" %s", arcas);

    char d;
    for(; i > 0; i--) {
        if(arcas[b] == 'T') {
            arcas[b] = 'V';
            t++;
        }

        scanf(" %c %d", &d, &p);
        while(p) {
          if(d == 'E') b--;
          else b++;

          if(arcas[b] == 'T') {
            arcas[b] = 'V';
            t++;
          }

          p--;
        }
    }
    printf("%d\n", t);
    return 0;
}
