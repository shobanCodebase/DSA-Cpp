class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1; 
        int sum = 0;
        int result = 0;
        for (int num : nums) {
            sum += num;
            if (prefixCount.find(sum - k) != prefixCount.end()) {
                result += prefixCount[sum - k];
            }
            prefixCount[sum]++;
        }
        return result;
    }
};