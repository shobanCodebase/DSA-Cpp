class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            freqMap[nums[i]]++; 
        }
        vector<vector<int>> buckets(n + 1);
         for (auto& [num, count] : freqMap) {
            buckets[count].push_back(num);
        }
         vector<int> result;
        for (int freq = n; freq >= 0 && (int)result.size() < k; freq--) {
            for (int num : buckets[freq]) {
                result.push_back(num);
                if ((int)result.size() == k) break;
            }
        }
        return result;
            
    }
};