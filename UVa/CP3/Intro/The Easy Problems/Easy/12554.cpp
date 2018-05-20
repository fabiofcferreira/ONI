#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> song = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    vector<string> singers;
    for(int i = 0; i < n; i++) {
        string input;
        cin >> input;
        singers.push_back(input);
    }

    size_t s = 0;
    int i = 0;
    bool allSung = false;
    while(true) {
        cout << singers[s] << ": " << song[i] << "\n";
        if(i == 15 && allSung) break;
        
        if(i == 15 && s < singers.size()-1) i = -1; // not everyone sung once
        else if(s == singers.size()-1) {
            allSung = true;
            s = -1;
        }

        s++;
        i++;
    }
}