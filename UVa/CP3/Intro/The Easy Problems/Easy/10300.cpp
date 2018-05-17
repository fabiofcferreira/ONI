#include <iostream>

using namespace std;

int main() {
    int t, budget = 0;
    cin >> t;

    while(t--) {
        budget = 0;
        int f;
        cin >> f;

        for(int i = 0; i < f; i++) {
            int fsize, animal, level;
            cin >> fsize >> animal >> level;

            budget += (fsize) * level;
        }

        cout << budget << "\n";
    }

    return 0;
}