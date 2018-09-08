#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int initPos, x, y, z;

  cin >> initPos >> x >> y >> z;

  while(initPos | x | y | z) {
    cout << (1080 + (((initPos - x + 40) % 40 + (y - x + 40) % 40 + (y - z + 40) % 40) * 9)) << '\n';

    cin >> initPos >> x >> y >> z;
  }
  
  return 0;
}