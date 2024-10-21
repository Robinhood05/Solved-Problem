#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> month(12);
    
    for (int i = 0; i < 12; i++) {
        cin >> month[i];
    }
    
    sort(month.rbegin(), month.rend());
    
    int total = 0;
    int months_needed = 0;
    
    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < 12; i++) {
        total += month[i];
        months_needed++;
        if (total >= k) {
            cout << months_needed << endl;
            return 0;
        }
    }
    
  
    
    return 0;
}
