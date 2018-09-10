#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  for(int i=1; i <= t; i++) {
    int n, hj = 0, lj = 0, lastHeight = 0, height = 0;
    cin >> n;

    for(int i=0; i < n; i++) {
      if(i == 0) {
        cin >> lastHeight;
        continue;
      }

      cin >> height;
      if(lastHeight > height) lj++;
      else if(lastHeight < height) hj++;

      lastHeight = height;
    }

    cout << "Case " << i << ": " << hj << " " << lj << '\n';
  }

  return 0;
}