#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int i = 0;
    while(true) {
        string input;
        cin >> input;
        if(input == "*") break;

        i += 1;
        if(!strcmp(input.c_str(), "Hajj")) cout << "Case " << i << ": Hajj-e-Akbar" << "\n";
        else cout << "Case " << i << ": Hajj-e-Asghar" << "\n";
    }

    return 0;
}