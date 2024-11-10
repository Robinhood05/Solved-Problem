class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int start = 0;

        int end = numbers.size()-1;
        vector<int>two;

        while(start<=end){

            int sum = numbers[start] + numbers[end];

            if(sum == target){
                two.push_back(start);
                two.push_back(end);
                return two;


            }
            else if(sum>target){
                end-=1;
            }
            else {
                start+=1;
            }


        }



        
    }
};
