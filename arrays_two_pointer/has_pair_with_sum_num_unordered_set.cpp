// Hashing approach | Time: O(n) | Space: O(n) | Works on unsorted arrays
pair<int, int> hasPairWithSum(vector<int>& arr, int target) {
    unordered_set<int> seen;
    for (int x : arr) {
        int complement = target - x;
        if (seen.find(complement) != seen.end()) return {complement, x};
        seen.insert(x);
    }
    return {-1, -1};
}