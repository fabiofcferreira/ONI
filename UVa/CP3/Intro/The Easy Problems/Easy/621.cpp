#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string input;
        cin >> input;

        if(input.substr(strlen(input.c_str()) -2) == "35") cout << "-\n";
        else if(input.substr(0, 3) == "190") cout << "?\n";
        else if(input.substr(0,1) == "9" && input.substr(strlen(input.c_str())-1) == "4") cout << "*\n";
        else cout << "+\n";
    }

    return 0;
}