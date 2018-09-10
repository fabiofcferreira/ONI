#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int w, nl, sl, d;
    cin >> w;

    bool possible = true;

    cin >> nl >> sl;
    d = abs(nl - sl);

    for(int i=w-1; i; i--) {
      cin >> nl >> sl;
      if(abs(nl - sl) != d) possible = false; 
    }

    cout << (possible == true ? "yes" : "no") << '\n';

    if(t) {
      cout << '\n';
    } 

  }

  return 0;
}