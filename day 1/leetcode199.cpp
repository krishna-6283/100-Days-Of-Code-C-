
// * Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root==NULL){
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* t=q.front();
                temp.push_back(t->val);
                q.pop();
                if(t->right){
                    q.push(t->right);
                }
                if(t->left){
                    q.push(t->left);
                }
            }
            v.push_back(temp[0]);
        }
        return v;
    }
};