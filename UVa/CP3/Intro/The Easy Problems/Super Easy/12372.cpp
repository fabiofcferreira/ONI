#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = 0;
  int length, width, height;

  for(int i = 1; i <= n; i++) {
    cin >> length >> width >> height;

    if(length <= 20 && width <= 20 && height <= 20) result = 1;
    else result = 0;
    cout << "Case " << i << ": " << (result == 1 ? "good" : "bad") << '\n';
  }

  return 0;
}