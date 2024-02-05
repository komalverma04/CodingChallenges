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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode* cur = root;
        TreeNode* temp = root;
        while(cur != NULL || !st.empty()){
            if(cur != NULL){
                st.push(cur);
                cur = cur->left;
            }else{
                temp = st.top()->right;
                if(temp == NULL){
                    temp = st.top();
                    ans.push_back(temp->val);
                    st.pop();
                    while(!st.empty() && temp == st.top()->right){
                        temp = st.top();
                    ans.push_back(temp->val);
                    st.pop();
                    }
                }else{
                    cur = temp;
                }
            }
        }
        return ans;
    }
};