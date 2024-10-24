

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int solve(const vector<int>& a) {
    long long sum = 0;
    int count = 0;
    unordered_set<long long> seenSums;
    
    seenSums.insert(0);
    
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

        if (seenSums.find(sum) != seenSums.end()) {
            count++;
            seenSums.clear();
            seenSums.insert(0);
            sum = 0;  
        }
        
        seenSums.insert(sum);
    }
    
    return count;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int size;
        cin >> size;
        vector<int> v(size);
        for (int i = 0; i < size; i++) {
            cin >> v[i];
        }
        int ans = solve(v);
        cout << ans << endl;
    }
    return 0;
}
