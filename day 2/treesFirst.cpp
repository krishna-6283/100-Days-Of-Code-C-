#include <iostream>
#include <queue>
#include<stack>
#include<algorithm>
using namespace std;

class TreeNode
{
public:
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int d)
	{
		val = d;
		left = NULL;
		right = NULL;
	}
};

void preorder(TreeNode *root)
{
	TreeNode *temp = root;
	cout << temp->val << " ";
	if (temp->left)
	{
		preorder(temp->left);
	}
	if (temp->right)
	{
		preorder(temp->right);
	}
}

void postorder(TreeNode *root)
{
	TreeNode *temp = root;
	if (temp->left)
	{
		postorder(temp->left);
	}
	if (temp->right)
	{
		postorder(temp->right);
	}
	cout << temp->val << " ";
}

void inorder(TreeNode *root)
{
	TreeNode *temp = root;
	if (temp->left)
	{
		inorder(temp->left);
	}
	cout << temp->val << " ";
	if (temp->right)
	{
		inorder(temp->right);
	}
}

void levelorder(TreeNode *root)
{
	queue<TreeNode *> q;
	q.push(root);
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			TreeNode *temp = q.front();
			q.pop();
			if (temp->left)
			{
				q.push(temp->left);
			}
			if (temp->right)
			{
				q.push(temp->right);
			}
			cout << temp->val << " ";
		}
	}
}

void reverseLevelOrder(TreeNode *root){
	queue<TreeNode *> q;
	q.push(root);
	vector<int> ans;
	while(!q.empty()){
		int size=q.size();
		for(int i=0;i<size;i++){
			TreeNode* temp=q.front();
			ans.push_back(temp->val);
			q.pop();
			if(temp->right){
				q.push(temp->right);
			}
			if(temp->left){
				q.push(temp->left);
			}
		}
	}
	reverse(ans.begin(), ans.end());
	for(auto i:ans){
		cout<<i<<" ";
	}

}

int main()
{
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	preorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	inorder(root);
	cout<<endl;
	levelorder(root);
	cout<<endl;
	reverseLevelOrder(root);
}