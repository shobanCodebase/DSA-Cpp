#include <queue>
#include <algorithm>

class Solution {
public:
    int minDepth(TreeNode* root) {
        // Base case: If the tree is empty, depth is 0
        if (!root) return 0;
        
        std::queue<TreeNode*> q;
        q.push(root);
        int depth = 1;
        
        while (!q.empty()) {
            int size = q.size();
            
            // Process all nodes at the current level
            for (int i = 0; i < size; ++i) {
                TreeNode* curr = q.front();
                q.pop();
                
                // If it's a leaf node, this is the shortest path!
                if (!curr->left && !curr->right) {
                    return depth;
                }
                
                // Otherwise, add valid children to the queue
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            // Move to the next level
            depth++;
        }
        
        return depth;
    }
};
