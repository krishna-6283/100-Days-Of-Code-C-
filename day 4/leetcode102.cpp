#include<bits/stdc++.h>
using namespace std;
#include<iostream>

class TreeNode{
	public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x){
		val=x;
		left=NULL;
		right=NULL;
	}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        vector<int> t={root->val};
        ans.push_back(t);
        while(!q.empty()){
            vector<int> k;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                    k.push_back(temp->left->val);
                }
                if(temp->right){
                    q.push(temp->right);
                    k.push_back(temp->right->val);
                }
            }
            if(!k.empty()){
                ans.push_back(k);
            }
        }
        return ans;
    }
};