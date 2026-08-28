#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        vector<vector<int>> result(rows, vector<int>(cols, -1));
        queue<pair<int,int>> q;
        
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (mat[r][c] == 0) {
                    result[r][c] = 0;
                    q.push({r, c});
                }
            }
        }
        
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            
            for (int dir = 0; dir < 4; dir++) {
                int nr = r + dr[dir];
                int nc = c + dc[dir];
                
                if (nr >= 0 && nr < rows && nc >= 0 && nc < cols 
                    && result[nr][nc] == -1) {
                    
                    result[nr][nc] = result[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
        
        return result;
    }
};