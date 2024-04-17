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
void inorderCall(TreeNode* root){
	if(root==NULL){
		return;
	}
	inorderCall(root->left);
	cout<<root->val<<" ";
	inorderCall(root->right);
}
int search(vector<int> inorder,int start, int end, int val){
	for(int i=start;i<=end;i++){
		if(inorder[i]==val) return i;
	}
	return -1;
}
TreeNode* buildTree(vector<int> &postorder, vector<int> &inorder,int start,int end){
	static int idx=postorder.size()-1;
	int val=postorder[idx];
	idx--;
	if(start>end){
		return NULL;
	}
	TreeNode* curr=new TreeNode(val);
	if(start==end){
		return curr;
	}
	int pos=search(inorder,start,end,val);

	curr->right=buildTree(postorder,inorder,pos+1,end);
	curr->left=buildTree(postorder,inorder,start,pos-1);
	return curr;
}

int main(){
	vector<int> postorder={4,2,5,3,1};
	vector<int> inorder={4,2,1,5,3};
	int end=postorder.size()-1;
	TreeNode* root=buildTree(postorder,inorder,0,end);
	inorderCall(root);
	return 0;

}