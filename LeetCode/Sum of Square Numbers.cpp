class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int result = sqrt(c);
        long long int start = 0;
        long long int end = result;

        while (start <= end) {
            long long int ans = start * start + end * end;

            if (ans == c) {
                return true;
            } else if (ans < c) {
                start++;
            } else {
                end--;
            }
        }
        return false;
    }
};
