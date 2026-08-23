class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> result;
        if (heights.empty() || heights[0].empty()) {
            return result;
        }
        
        int rows = heights.size();
        int cols = heights[0].size();
        
        vector<vector<bool>> canReachPacific(rows, vector<bool>(cols, false));
        vector<vector<bool>> canReachAtlantic(rows, vector<bool>(cols, false));
        
        for (int c = 0; c < cols; c++) {
            dfs(heights, canReachPacific, 0, c, rows, cols);
        }
        for (int r = 0; r < rows; r++) {
            dfs(heights, canReachPacific, r, 0, rows, cols);
        }
        
        for (int c = 0; c < cols; c++) {
            dfs(heights, canReachAtlantic, rows - 1, c, rows, cols);
        }
        for (int r = 0; r < rows; r++) {
            dfs(heights, canReachAtlantic, r, cols - 1, rows, cols);
        }
        
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (canReachPacific[r][c] && canReachAtlantic[r][c]) {
                    result.push_back({r, c});
                }
            }
        }
        
        return result;
    }
    
private:
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited,
             int r, int c, int rows, int cols) {
        
        if (visited[r][c]) {
            return;
        }
        
        visited[r][c] = true;
        
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        
        for (int dir = 0; dir < 4; dir++) {
            int nr = r + dr[dir];
            int nc = c + dc[dir];
            
            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols 
                && !visited[nr][nc] 
                && heights[nr][nc] >= heights[r][c]) {
                
                dfs(heights, visited, nr, nc, rows, cols);
            }
        }
    }
};