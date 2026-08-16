class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
    
private:
    bool validate(TreeNode* node, long long minBound, long long maxBound) {
        if (node == nullptr) {
            return true;
        }
        
        if (node->val <= minBound || node->val >= maxBound) {
            return false;
        }
        
        bool leftValid = validate(node->left, minBound, node->val);
        
        bool rightValid = validate(node->right, node->val, maxBound);
        
        return leftValid && rightValid;
    }
};