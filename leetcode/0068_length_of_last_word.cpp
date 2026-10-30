class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Step 1: Skip all trailing spaces at the end of the string
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: Count characters until we hit a space or reach the beginning
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};