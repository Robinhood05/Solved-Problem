class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> v;
        for(int i = 0;i<nums.size();i++){

            v.insert(nums[i]);

        }

        int k = v.size();

        int index =0;
        for(auto c : v){
            nums[index] = c;
            index++;
        }
        return k;
    }
};

