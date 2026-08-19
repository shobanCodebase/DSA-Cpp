class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (dfs(board, word, r, c, 0)) {
                    return true;  
                }
            }
        }
        
        return false;  
    }
    
private:
    bool dfs(vector<vector<char>>& board, string& word, 
             int row, int col, int wordIndex) {
        
        // BASE CASE (success): we've matched every character.
        if (wordIndex == word.length()) {
            return true;
        }
        
        
        if (row < 0 || row >= board.size() || 
            col < 0 || col >= board[0].size() ||
            board[row][col] != word[wordIndex]) {
            return false;
        }
        
        
        char temp = board[row][col];
        board[row][col] = '#';
        
        bool found = dfs(board, word, row + 1, col, wordIndex + 1) ||
                     dfs(board, word, row - 1, col, wordIndex + 1) ||
                     dfs(board, word, row, col + 1, wordIndex + 1) ||
                     dfs(board, word, row, col - 1, wordIndex + 1);
        
       
        board[row][col] = temp;
        
        return found;
    }
};