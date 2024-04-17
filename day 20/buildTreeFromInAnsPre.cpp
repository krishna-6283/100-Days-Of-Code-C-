#include<bits/stdc++.h>
using namespace std;

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

int search(vector<int> inorder,int start,int end, int curr){
	for(int i=start;i<=end;i++){
		if(curr==inorder[i])
		return i;
	}
	return -1;
}

TreeNode* buildTree(vector<int> preorder, vector<int> inorder,int start,int end){
	
	if(start>end){
		return NULL;
	}
	
	static int idx=0;

	int curr=preorder[idx];
	idx++;
	TreeNode* node=new TreeNode(curr);
	if(start==end){
		return node;
	}
	int pos=search(inorder,start,end,curr);

	node->left=buildTree(preorder,inorder,start ,pos-1);
	node->right=buildTree(preorder,inorder,pos+1,end);
	return node;


}

void inorderCall(TreeNode* root){
	if(root==NULL){
		return;
	}
	inorderCall(root->left);
	cout<<root->val<<" ";
	inorderCall(root->right);
}

int main(){
	vector<int> preorder={1,2,4,3,5};
	vector<int> inorder={4,2,1,5,3};
	int end=preorder.size()-1;
	TreeNode* root=buildTree(preorder,inorder,0,end);
	inorderCall(root);
	return 0;
}