#include <iostream>

using namespace std;

int main() {
    int t = 0;
    cin >> t;

    while(t) {
        int n = 6, m = 6, sonarsperL = 0, sonarsperC = 0;
        cin >> n >> m;

        // get number of sonars per line
        sonarsperL = (m/3);
        // get number of sonars per column
        sonarsperC = (n/3);

        cout << sonarsperL * sonarsperC << "\n";
        t--;
    }
    return 0;
}