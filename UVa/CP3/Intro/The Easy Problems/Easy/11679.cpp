#include <iostream>
#include <vector>

using namespace std;

int main() {
    int b,n;
    bool possible = true;

    while(true) {
        cin >> b >> n;
        if(b == 0 && n == 0) return 0;

        possible = true;
        vector<int> bCredits;
        
        for(int i = 0; i < b; i++) {
            int temp;
            cin >> temp;

            bCredits.push_back(temp);
        }

        while(n--) {
            int D, C, V;
            cin >> D >> C >> V;

            bCredits[C-1] += V;
            bCredits[D-1] -= V;
        }

        for(size_t i = 0; i < bCredits.size(); i++) {
            if(bCredits[i] < 0) possible = false;
        }

        if(possible) cout << "S" << "\n";
        else cout << "N" << "\n";
    }

    return 0;
}