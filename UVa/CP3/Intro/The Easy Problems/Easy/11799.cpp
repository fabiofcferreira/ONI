#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  int minSpeed;
  for(int i = 1; i <= t; i++) {
    minSpeed = 0;
    int n;
    cin >> n;

    for(; n; n--) {
      int s;

      cin >> s;
      if(s > minSpeed) minSpeed = s; 
    }

    cout << "Case " << i << ": " << minSpeed << '\n';
  }
  
  return 0;
}