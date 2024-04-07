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

int main(){
	vector<int> ans;
	ans.push_back(1);
	ans.push_back(2);

	ans.push_back(-1);
	ans.push_back(3);
	for(auto i:ans){
		cout<<i<<" ";
	}
	queue<TreeNode*> q;
	TreeNode* root = new TreeNode(1);
    root->left =new TreeNode(2);
    root->right =new TreeNode(3);
	q.push(root);
	q.push(root->left);
	q.push(NULL);
	q.push(root->right);

	int size=q.size();
	cout<<endl<<size;
	
	return 0;
}