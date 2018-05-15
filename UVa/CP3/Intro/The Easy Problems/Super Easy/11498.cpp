#include <iostream>
#include <cstring>

using namespace std;

int main() {
    while(true) {
        int t;
        cin >> t;
        if(!t) break;

        int divX, divY;
        cin >> divX >> divY;

        
        for(; t; t--) {
            int x, y;
            bool divisa = false;
            string quadrant = "";
            cin >> x >> y;

            // Y coord is greater than division Y coord, thus the house in the north quadrants
            if(y > divY) quadrant = "N";
            else if (y < divY) quadrant = "S";
            else divisa = true;

            // the same happens with coords X
            if(x > divX) quadrant += "E";
            else if (x < divX) quadrant += "O";
            else divisa = true;

            divisa ? cout << "divisa\n" : cout << quadrant << "\n";
        }
        
    }

    return 0;
}