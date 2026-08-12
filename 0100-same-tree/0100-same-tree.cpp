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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string>t1,t2;
        preorder(p , t1);
        preorder(q , t2);
        if(t1 == t2) return true;
        return false;  
    }
    void preorder(TreeNode* root, vector<string>& ans) {
        if (root == NULL) {
            ans.push_back("NULL");
            return;
        }
        ans.push_back(to_string(root->val));
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
};