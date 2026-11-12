class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        dfs(root, ans);
        return ans;
    }

private:
    void dfs(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) {
            return;
        }
        ans.push_back(node->val); // 1. Visit Root
        dfs(node->left, ans);      // 2. Traverse Left
        dfs(node->right, ans);     // 3. Traverse Right
    }
};
