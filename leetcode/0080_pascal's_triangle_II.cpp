#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Initialize a vector of size (rowIndex + 1) with all 1s
        vector<int> row(rowIndex + 1, 1);
        
        // Build the triangle row by row starting from row 2
        for (int i = 2; i <= rowIndex; ++i) {
            // Update from right to left so previous row values aren't overwritten early
            for (int j = i - 1; j > 0; --j) {
                row[j] = row[j] + row[j - 1];
            }
        }
        
        return row;
    }
};
