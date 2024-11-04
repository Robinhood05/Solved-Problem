#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        set<int> x_coords;
        set<int> y_coords;

        for (int i = 0; i < 4; ++i) {
            int x, y;
            cin >> x >> y;
            x_coords.insert(x);
            y_coords.insert(y);
        }

        if (x_coords.size() == 2 && y_coords.size() == 2) {
            int side_length = abs(*x_coords.rbegin() - *x_coords.begin()); 
            int area = side_length * side_length;
            cout << area << endl;
        }
    }

    return 0;
}
