class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        queue<pair<int,int>> q;
        int freshCount = 0;
        
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 2) {
                    q.push({r, c});
                } else if (grid[r][c] == 1) {
                    freshCount++;
                }
            }
        }
        
        if (freshCount == 0) {
            return 0;
        }
        
        int minutesElapsed = 0;
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        
        while (!q.empty()) {
            
            int levelSize = q.size();
            bool rottedAnyThisLevel = false;
            
            for (int i = 0; i < levelSize; i++) {
                auto [r, c] = q.front();
                q.pop();
                
                for (int dir = 0; dir < 4; dir++) {
                    int nr = r + dr[dir];
                    int nc = c + dc[dir];
                    
                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols 
                        && grid[nr][nc] == 1) {
                        
                        grid[nr][nc] = 2;
                        freshCount--;
                        q.push({nr, nc});
                        rottedAnyThisLevel = true;
                    }
                }
            }
            
            if (rottedAnyThisLevel) {
                minutesElapsed++;
            }
        }
        
        return (freshCount == 0) ? minutesElapsed : -1;
    }
};