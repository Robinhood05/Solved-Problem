#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int, long long int> vec; 

        for (int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
           vec[a] += b;
        }

        long long int total = 0;
        vector<pair<int, long long int>> valueIndex;

        for (const auto& entry : vec) {
            if (entry.second > 0) { 
                valueIndex.push_back(entry);
            }
        }
        sort(valueIndex.begin(), valueIndex.end(), [](const pair<int, long long int>& a, const pair<int, long long int>& b) {
            return a.second > b.second; 
        });

        for (int i = 0; i < min(n, static_cast<int>(valueIndex.size())); i++) {
            total += valueIndex[i].second;
        }

        cout << total << endl;
    }

    return 0;
}
