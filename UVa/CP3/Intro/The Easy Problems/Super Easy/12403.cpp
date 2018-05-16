#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;

    int balance = 0;
    while(t--) {
        string input;
        int value = -1;
        cin >> input;

        if(input == "donate") {
            cin >> value;
            balance += value;
        } else cout << balance << "\n";
    }

    return 0;
}