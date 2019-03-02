#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // N - map size
  // K - number of consecutive blocks
  // t - minimum depth
  int n, t, counter, result;
  n = t = counter = result = 0;
  float k = 0;

  cin >> n >> k >> t;

  // get all the blocks and detect if they are greater than 150
  bool* map = new bool[n];
  for(int i = 0; i < n; i++) {
    int dep;
    cin >> dep;
    
    if(dep >= t) map[i] = true;
    else map[i] = false;
  }

  // get result of the first X blocks
  counter = 0;
  for(int i = 0; i < k; i++) {
    if(map[i] == 1) counter++;
  }  
  
  // check if the first X blocks are good
  if(counter >= ceil(k/2)) result++;

  // loop from 1 to N
  int a = 1;
  while(a < n) {
    // check the block that was removed
    if(map[a-1] == 1) counter--;

    // check the new element
    if((a+k <= n)) {
      if(map[a+int(k)-1] == 1) counter++;
    }

    // if the counter is still greater than k/2
    // then it means the new sequence is good 
    if(counter >= ceil(k/2)) {
      result++;
    }

    a++;
  }

  cout << result << endl;

  delete map;
  return 0;
}