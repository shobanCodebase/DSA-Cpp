#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Two-pointer approach | Time: O(n) | Space: O(1) | Requires sorted input

bool hasPairWithSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        
        if (currentSum == target) {
            return true;
        }
        else if (currentSum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    
    return false;
}