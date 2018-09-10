#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        int calls[n];

        for(int k = 0; k < n; k++) {
            int callDuration;
            cin >> callDuration;

            calls[k] = callDuration;
        }

        int mileCost = 0, juiceCost = 0;
        for(int k = 0; k < n; k++) {
            mileCost += ((calls[k] / 30) * 10) + 10; 
            juiceCost += ((calls[k] / 60) * 15) + 15;
        }

        cout << "Case " << i << ": ";
        if(mileCost < juiceCost) cout << "Mile ";
        else if(mileCost > juiceCost) cout << "Juice ";
        else cout << "Mile Juice ";

        cout << min(mileCost, juiceCost) << "\n";
    }

    return 0;
}