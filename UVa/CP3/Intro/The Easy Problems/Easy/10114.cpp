#include <iostream>

using namespace std;

int main() {
    int duration, depreciations;
    long double down, loan, monthly, value;
    
    while(true) {
        cin >> duration >> down >> loan >> depreciations;
        if(duration < 0) break;

        value = loan + down;
        monthly = loan / duration;
        long double dep[110];

        while(depreciations--) {
            int month;
            long double rate;
            cin >> month >> rate;

            for(int i = month; i < 110; i++) dep[i] = rate;
        }

        int month = 0;
        while(true) {
            value *= (1.00 - dep[month]);

            if(loan < value) break;

            loan -= monthly;
            month++;
        }

        cout << month;
        if(month == 1) cout << " month\n";
        else cout << " months\n";
    }

    return 0;
}