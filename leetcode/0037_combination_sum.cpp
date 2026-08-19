class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        
        sort(candidates.begin(), candidates.end());
        
        backtrack(candidates, target, 0, path, result);
        
        return result;
    }
    
private:
    void backtrack(vector<int>& candidates, int remaining, int start,
                    vector<int>& path, vector<vector<int>>& result) {
        
        // BASE CASE 1: hit the target exactly -> record this combination.
        if (remaining == 0) {
            result.push_back(path);
            return;
        }
        
        
        for (int i = start; i < candidates.size(); i++) {
            
            if (candidates[i] > remaining) {
                break;
            }
            
            path.push_back(candidates[i]);
            
            backtrack(candidates, remaining - candidates[i], i, path, result);
            
            path.pop_back();
        }
    }
};