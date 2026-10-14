class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string str1 = str;
        reverse(str1.begin(), str1.end());
        if (str1 == str) {
            return true;
        } else {
            return false;
        }
    }
};