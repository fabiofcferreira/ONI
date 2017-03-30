#include <cstdio>
#include <ctype.h>

int main() {

    int n = 0,
        b = 0,
        i = 0,
        p = 0,
        t = 0;

    scanf("%d %d %d", &n, &b, &i);
    char arcas[n];
    scanf(" %s", arcas);

    char d;
    for(; i > 0; i--) {
        if(arcas[b-1] == 'T') {
            arcas[b-1] = 'V';
            t++;
        }
        scanf(" %c %d", &d, &p);

        if(d == 'E') {
            b -= p;
        } else {
            b += (p-1);
        }

        if(arcas[b] == 'T') {
            arcas[b] = 'V';
            t++;
        }
    }
    printf("%d\n", t);
    return 0;
}
