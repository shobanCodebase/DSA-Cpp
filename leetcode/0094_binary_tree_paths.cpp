/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /**
     * Finds all root-to-leaf paths in a binary tree
     * @param root The root node of the binary tree
     * @return A vector of strings representing all root-to-leaf paths
     */
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;           // Stores all root-to-leaf paths
        vector<string> currentPath;      // Stores the current path being explored
      
        // Define recursive DFS function to traverse the tree
        function<void(TreeNode*)> dfs = [&](TreeNode* node) {
            // Base case: if node is null, return
            if (!node) {
                return;
            }
          
            // Add current node's value to the path
            currentPath.push_back(to_string(node->val));
          
            // If it's a leaf node, add the complete path to result
            if (!node->left && !node->right) {
                result.push_back(buildPathString(currentPath));
            } 
            // Otherwise, continue exploring left and right subtrees
            else {
                dfs(node->left);
                dfs(node->right);
            }
          
            // Backtrack: remove current node from path before returning
            currentPath.pop_back();
        };
      
        // Start DFS traversal from root
        dfs(root);
        return result;
    }

private:
    /**
     * Joins vector elements into a single string with separator
     * @param pathElements Vector of string elements to join
     * @param separator The separator string (default: "->")
     * @return A string with all elements joined by the separator
     */
    string buildPathString(const vector<string>& pathElements, const string& separator = "->") {
        string pathString;
      
        for (size_t i = 0; i < pathElements.size(); ++i) {
            // Add separator before each element except the first one
            if (i > 0) {
                pathString += separator;
            }
            pathString += pathElements[i];
        }
      
        return pathString;
    }
};
