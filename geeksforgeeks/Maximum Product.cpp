 long long maximumProduct(int n, vector<int> &arr, int l, int r) {
        // Adjust to 0-based indexing for l and r
        l -= 1;
        r -= 1;
        
        int maxSubarray = INT_MIN;
        int minSubarray = INT_MAX;
        int maxRemaining = INT_MIN;
        int minRemaining = INT_MAX;

        // Traverse the entire array in one pass
        for (int i = 0; i < n; i++) {
            if (i >= l && i <= r) {
                // This element belongs to the subarray
                maxSubarray = max(maxSubarray, arr[i]);
                minSubarray = min(minSubarray, arr[i]);
            } else {
                // This element is outside the subarray
                maxRemaining = max(maxRemaining, arr[i]);
                minRemaining = min(minRemaining, arr[i]);
            }
        }

        // Check all four possible products
        long long product1 = static_cast<long long>(maxSubarray) * maxRemaining;
        long long product2 = static_cast<long long>(maxSubarray) * minRemaining;
        long long product3 = static_cast<long long>(minSubarray) * maxRemaining;
        long long product4 = static_cast<long long>(minSubarray) * minRemaining;

        // Return the maximum of the four products
        return max({product1, product2, product3, product4});
    }
};
