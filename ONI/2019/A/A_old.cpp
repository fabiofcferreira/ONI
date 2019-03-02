#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // N - map size
  // K - number of consecutive blocks
  // t - minimum depth
  int n, t, counter, result;
  n = 0;
  t = 0;
  counter = 0;
  result = 0;

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

  for(int a = 0; a < n; a++) cout << map[a];
  cout << endl;

  /*
  // let's loop through the dataset
  for(int a = 0; a < n; a++) {
    if(map[a] == true) {
      // this field is good
      counter++;

      if(counter >= k/2) result++;
    }
  }
  */

  
  // get result of the first X blocks
  counter = 0;
  for(int i = 0; i < k; i++) {
    if(map[i] == 1) counter++;
  }  
  
  // check if the first X blocks are good
  if(counter >= ceil(k/2)) result++;

  int a = 1;
  while(a < n) {
    cout << "a: " << a << endl << endl;
    if(map[a-1] == 1) counter--;
    if((a+k <= n)) {
      if(map[a+int(k)-1] == 1) counter++;
    } else {
      //cout << "Reached the end" << endl;
    }


    /*
    cout << "a-1:" << map[a-1] << endl;
    cout << "last:" << map[a+int(k)-1] << endl;
    */
    if(counter >= ceil(k/2)) {
      cout << "Found another sequence" << endl;
      result++;
      cout << "Result:" << result << endl;
    }

    a++;
  }

  cout << result << endl;

  delete map;
  return 0;
}