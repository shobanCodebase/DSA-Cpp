class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        dfs(root, result);
        return result;
    }

private:
    void dfs(TreeNode* node, vector<int>& result) {
        if (node == nullptr) return;
        
        dfs(node->left, result);   // 1. Traverse left subtree
        dfs(node->right, result);  // 2. Traverse right subtree
        result.push_back(node->val); // 3. Visit root
    }
};
