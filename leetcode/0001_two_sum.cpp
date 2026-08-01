// Time: O(n) | Space: O(n) | value -> first-seen-index map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Maps the number value to its corresponding index
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
                        if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
                        seen[nums[i]] = i;
        }
        
        return {-1, -1};
    }
};
