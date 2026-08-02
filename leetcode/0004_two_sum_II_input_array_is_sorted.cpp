// Two-pointer | Time: O(n) | Space: O(1) — better than hashing here since array is already sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        
        while (left < right) {
            int currentSum =numbers[left] + numbers[right];
            
            if (currentSum == target) {
                return {left + 1 , right + 1};
            }
            else if (currentSum <target) {
                left++;
            }
            else {
                right--;
            }
        }
        
        return {-1, -1};
    }
};