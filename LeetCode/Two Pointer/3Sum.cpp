class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> hashSet;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; ++i) {
        int curr_num = nums[i];
        int start = i + 1;
        int end = nums.size() - 1;

        while (start < end) {
            int total_sum = curr_num + nums[start] + nums[end];

            if (total_sum == 0) {
                hashSet.insert({nums[i], nums[start], nums[end]});
                start += 1;
                end -= 1;
            }
            else if (total_sum > 0) {
                end -= 1;
            }
            else {
                start += 1;
            }
        }
    }

    vector<vector<int>> uniqueVector(hashSet.begin(), hashSet.end());
    return uniqueVector;
}
};
