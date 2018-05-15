#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(; t; t--) {
        int n;
        cin >> n;

        cout << abs((((315*n) + 36962) / 10) % 10) << "\n";
    }

    return 0;
}