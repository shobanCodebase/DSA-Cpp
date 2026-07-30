// Fixed-size sliding window | Time: O(n) | Space: O(1)
int maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k || k <= 0) return 0;

    int window_sum = 0;
    for (int i = 0; i < k; ++i) window_sum += arr[i];

    int max_sum = window_sum;
    for (int i = k; i < n; ++i) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}