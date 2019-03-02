#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n, m, q, qi, counter;
  n = m = q = qi = counter = 0;

  cin >> n >> m;

  // read each participant final destination
  //int* df = new int[m];
  
  vector<int> df(0,0);
  for(int i = 0; i < m; i++) {
    int val;
    cin >> val;

    df.push_back(val);

    //cin >> df[i];
  }

  // let's sort the participants in ascending order
  sort(df.begin(), df.end());

  // so how many questions do you want to ask?
  cin >> q;
  for(int i = 0; i < q; i++) {
    cin >> qi;

    // k will hold the index position
    float k;    
    int a = 0, b = m - 1;
    while(a <= b) {
      k = floor((a+b)/2);

      if(df[k] == qi) {
        // found it
        break;
      }

      // if the element is bigger than the one
      // what we're trying to find
      // set the new limit to the mid of the previous section
      if(df[k] > qi) b = k -1;
      else a = k + 1;
    }

    if(qi > df[k]) k += 1;

    cout << (m - k) << endl;
  }

  return 0;
}