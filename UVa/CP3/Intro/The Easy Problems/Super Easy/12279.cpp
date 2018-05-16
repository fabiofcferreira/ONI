#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int i = 0;
    while(true) {
        int t;
        cin >> t;
        if(t == 0) break;
        else i++;

        int balance = 0;

        while(t--) {
            int prob;
            cin >> prob;

            if(prob == 0) balance--;
            else balance++;
        }

        cout << "Case " << i << ": " << balance << "\n";
    }

    return 0;
}