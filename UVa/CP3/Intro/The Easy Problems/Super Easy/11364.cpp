#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    for(; t; t--) {
        cin >> n;

        int minIndex = 99, maxIndex = 0;
        for(int j = 0; j < n; j++) { // get stores index
            int temp;
            cin >> temp;
            
            // get max distance
            if(temp > maxIndex) maxIndex = temp;
            if(temp < minIndex) minIndex = temp;

        }

        cout << ((maxIndex - minIndex) * 2) << "\n";
    }

    return 0;
}