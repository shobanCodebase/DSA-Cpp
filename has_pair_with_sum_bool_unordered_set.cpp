// Hashing approach | Time: O(n) | Space: O(n) | Works on unsorted arrays
bool hasPairWithSum(vector<int>& arr, int target) {
    unordered_set<int> seen;
    for (int x : arr) {
        int complement = target - x;
        if (seen.find(complement) != seen.end()) return true;
        seen.insert(x);
    }
    return false;
}