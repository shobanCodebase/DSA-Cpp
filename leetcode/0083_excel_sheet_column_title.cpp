#include <string>
#include <algorithm>

class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string result;
        
        while (columnNumber > 0) {
            columnNumber--; // Shift 1-indexed value to 0-indexed
            char ch = 'A' + (columnNumber % 26);
            result.push_back(ch);
            columnNumber /= 26;
        }
        
        std::reverse(result.begin(), result.end());
        return result;
    }
};
