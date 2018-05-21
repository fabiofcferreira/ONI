#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int inst[n], pos = 0;

        for(int i = 0; i < n; i++) {
            string in;
            cin >> in;

            if(in[0] == 'L') pos += inst[i] = -1;
            else if(in[0] == 'R') pos += inst[i] = 1;
            else {
                int index;
                cin >> in >> index;

                pos += inst[i] = inst[index-1];
            }
        }

        cout << pos << "\n";
    }

    return 0;
}