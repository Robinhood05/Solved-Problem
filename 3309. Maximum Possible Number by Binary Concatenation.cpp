class Solution {
public:
   

  string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    return binary;
}

int maxGoodNumber(vector<int>& nums) {
    int maxNumber = 0;

    // Sort to generate permutations
    sort(nums.begin(), nums.end());
    
    // Iterate over all permutations
    do {
        string binaryString = "";
        // Concatenate binary representations of the numbers in the current permutation
        for (int num : nums) {
            binaryString += toBinary(num);
        }
        
        // Convert the concatenated binary string to a decimal number
        int number = stoi(binaryString, nullptr, 2);
        // Update the maximum number
        maxNumber = max(maxNumber, number);

    } while (next_permutation(nums.begin(), nums.end()));

    return maxNumber;
}
};
