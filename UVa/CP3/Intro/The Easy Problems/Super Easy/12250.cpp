#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    vector<string> list;
    while(true) {
        string in;
        cin >> in;
        if(in == "#") break;

        list.push_back(in);
    }

    for(size_t i = 1; i <= list.size(); i++) {
        string lang = "";
        string str = list[i-1];
        if(str == "HELLO") lang = "ENGLISH";
        if(str == "HOLA") lang = "SPANISH"; 
        if(str == "HALLO") lang = "GERMAN"; 
        if(str == "BONJOUR") lang = "FRENCH"; 
        if(str == "CIAO") lang = "ITALIAN";
        if(str == "ZDRAVSTVUJTE") lang = "RUSSIAN";

        if(lang == "") {
            lang = "UNKNOWN";
        }

        cout << "Case " << i << ": " << lang << "\n";
    }

    return 0;
}