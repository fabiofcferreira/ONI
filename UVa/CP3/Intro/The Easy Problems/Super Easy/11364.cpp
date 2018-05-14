#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t, n;
    vector<int> results;
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;
        vector<int> storesIndex;

        for(int j = 0; j < n; j++) { // get stores index
            int temp;
            cin >> temp;
            
            storesIndex.push_back(temp);
        }
        sort(storesIndex.begin(), storesIndex.end());

        // car index
        int parkedCar = floor((storesIndex[0] + storesIndex[1])/2);
        int d = 0, j = 0, lastpos = parkedCar;

        for(; j < n; j++) {
            d += abs(storesIndex[j] - lastpos);
            lastpos = storesIndex[j];
        }

        d += abs(storesIndex[j-1] - parkedCar);

        results.push_back(d);
    }

    for(int i = 0; i < t; i++) {
        cout << results[i] << "\n";
    }

    return 0;
}