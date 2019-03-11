#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n, giftsNumber;
  float giftedAmount;
  string name, giftedPerson;

  while(cin >> n) {
    // create a new map without elements
    map<string, int> balance;
    string names[n];

    // read everybody's name
    for(int i = 0; i < n; i++) {
      // read person name
      cin >> name;
      
      // set person starting balance
      balance[name] = 0;
      // save name
      names[i] = name;
    }

    // loop through every person gifting
    for(int i = 0; i < n; i++) {
      // read person name and balance
      cin >> name >> giftedAmount >> giftsNumber;

      if(giftedAmount == 0) continue;

      // save person initial balance
      balance[name] -= giftedAmount;
      giftedAmount = floor(giftedAmount / giftsNumber);

      for(int j = 0; j < giftsNumber; j++) {
        cin >> giftedPerson;

        balance[giftedPerson] += giftedAmount;
      }
    }

    // print every person balance
    for(int i = 0; i < n; i++) {
      cout << names[i] << " " << balance[names[i]] << endl;
    }
    cout << endl;
  }

  return 0;
}