#include <iostream>
using namespace std;
//   Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main()
{
	// 7,9,6,6,7,8,3,0,9,5]
	ListNode *head = new ListNode(7);
	head->next = new ListNode(9);
	head->next->next = new ListNode(6);
	head->next->next->next = new ListNode(6);
	head->next->next->next->next = new ListNode(7);
	head->next->next->next->next->next = new ListNode(8);
	head->next->next->next->next->next->next = new ListNode(3);
	head->next->next->next->next->next->next->next = new ListNode(0);
	head->next->next->next->next->next->next->next->next = new ListNode(9);
	head->next->next->next->next->next->next->next->next->next = new ListNode(5);

	ListNode *temp = head;
	int count = 0;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	//count =5
	int k=5;
	int j=k;
	temp=head;
	while(j>1){
		temp=temp->next;
		j--;
	}
	// cout<<temp->val<<endl;
	ListNode* first=new ListNode(temp->val);
	temp=head;
	int l=count-k+1;
	while(l>2){
		temp=temp->next;
		l--;
	}
	// cout<<temp->val<<endl;
	ListNode* second=new ListNode(temp->next->val);
	first->next=temp->next->next;
	temp->next=first;
	// cout<<first->next->val<<endl;
	// cout<<second->val<<endl;
	temp=head;
	j=k;
	while(j>2){
		temp=temp->next;
		j--;
	}
	// cout<<temp->val<<endl;
	second->next=temp->next->next;
	temp->next=second;
	temp=head;
	while(temp){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	// [7,9,6,6,8,7,3,0,9,5]
	


}