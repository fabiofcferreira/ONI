#include <iostream>

using namespace std;

int main() {
    int a, b;

    while(true) {
        cin >> a >> b;
        if(a == -1 && b == -1) break;

        int n1 = max(a,b),
            n2 = min(a,b);

        cout << min(n1 - n2, 100 + n2 - n1 ) << "\n";
    }

    return 0;
}