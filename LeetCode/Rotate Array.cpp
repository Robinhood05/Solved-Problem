void rotate(vector<int>& nums, int k) {
        if (k < nums.size()) {
            vector<int> temp;
            for (int index = nums.size() - k; index < nums.size(); index++) {
                temp.push_back(nums[index]);
            }
            for (int index = 0; index < nums.size() - k; index++) {
                temp.push_back(nums[index]);
            }
            nums = temp;
        } else {
            int count = k;
            vector<int> temp(nums.size());
            while (count > 0) {
                int last = nums[nums.size() - 1];
                for (int index = 1; index < nums.size(); index++) {
                    temp[index] = nums[index - 1];
                }
                temp[0] = last;
                count--;
                nums = temp;
            }
        }
    }
