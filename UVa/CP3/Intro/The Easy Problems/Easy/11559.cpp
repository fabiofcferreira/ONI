#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n,b,h,w,cost;

    while(scanf("%d %d %d %d", &n, &b, &h, &w) == 4) {
        cost = b+1;
        while(h--) {
            int p, rooms;
            cin >> p;

            for(int i = 0; i < w; i++) {
                cin >> rooms;
                if(rooms > n) {
                    // it's possible to get rooms at this hotel at i-th weekend 
                    cost = min(cost, n*p);
                }
            } 
        }

        if(cost == b+1) cout << "stay home\n";
        else cout << cost << "\n";
    }

    return 0;
}