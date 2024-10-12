class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();             
        map<int, int> hash;              

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++; 
        }

        for (const auto& val : hash) {
            if (val.second == 1) {      
                return val.first;       
            }
        }
        
        return -1; 
    }
};
