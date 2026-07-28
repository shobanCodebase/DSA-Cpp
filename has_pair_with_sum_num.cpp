// Two-pointer approach | Time: O(n) | Space: O(1) | Requires sorted input
pair<int, int> hasPairWithSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == target) return {arr[left], arr[right]};
        else if (currentSum < target) left++;
        else right--;
    }
    return {-1, -1};
}