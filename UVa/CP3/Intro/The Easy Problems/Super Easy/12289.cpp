#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n; 
    cin >> n;

    for(; n; n--) {
        string in;
        cin >> in;
        
        int n = 0;
        
        if(strlen(in.c_str()) > 3) n = 3;
        else if((in[0]=='o' && in[1]=='n')||
          (in[0]=='o' && in[1]=='e')||
          (in[1]=='n' && in[2]=='e')||
          (in[0]=='o' && in[2]=='e')||
          (in[0]=='o' && in[2]=='n')) n = 1;
        else if(!n) n = 2;

        cout << n << "\n";
    } 


    return 0;
}