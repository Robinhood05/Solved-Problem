int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size();
    int maxi = 0;
    
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        int count = 0;      
        for (int j = i; j < n; j++) {
            sum += a[j];    
            count++;
            
            if (sum == k) {
                maxi = max(maxi, count);  
            }
            else if (sum > k) {
                break;
            }
        }
    }
    
    return maxi;
}
