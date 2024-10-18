#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

pair<bool, int> calculate_day(int h, int u, int d, int f) {
    int day = 0;
    double current_height = 0.0;
    double climb_distance = u; 
    double fatigue = u * (f / 100.0);
    
    while (true) {
        day++;
        
        if (climb_distance > 0) {
            current_height += climb_distance;
        }

        if (current_height > h) {
            return make_pair(true, day);
        }

        
        current_height -= d;

        if (current_height < 0) {
            return make_pair(false, day);
        }

        climb_distance -= fatigue;
        if (climb_distance < 0) {
            climb_distance = 0;
        }
    }
}

int main() {
    int h;
    while (cin >> h && h != 0) {
        int u, d, f;
        cin >> u >> d >> f;
        
        pair<bool, int> result = calculate_day(h, u, d, f);
        
        if (result.first) {
            cout << "success on day " << result.second << endl;
        } else {
            cout << "failure on day " << result.second << endl;
        }
    }
    
    return 0;
}
