#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        int s1, s2, s3, saved;
        cin >> s1 >> s2 >> s3;

        if(s1 > s2) {
            if(s1 > s3) s2 > s3 ? saved = s2 : saved = s3;
            else saved = s1;
        } else if(s2 > s1) {
            if(s2 > s3) s3 > s1 ? saved = s3 : saved = s1;
            else saved = s2;
        }

        cout << "Case " << i << ": " << saved << "\n"; 
    }

    return 0;
}