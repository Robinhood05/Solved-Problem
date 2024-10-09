#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long sum = 0;
    map<long long, int> mp;  // To store the first occurrence of prefix sums
    int maxi = 0;
    
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        
        // If the sum itself is equal to k, the subarray from the beginning to i has sum k
        if (sum == k) {
            maxi = max(maxi, i + 1);
        }
        
        long long rem = sum - k;  // The remaining sum that we're looking for
        
        // If rem is found in the map, it means a subarray with sum k exists
        if (mp.find(rem) != mp.end()) {
            int len = i - mp[rem];
            maxi = max(maxi, len);
        }
        
        // Only store the first occurrence of the prefix sum in the map
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }
    
    return maxi;
}
