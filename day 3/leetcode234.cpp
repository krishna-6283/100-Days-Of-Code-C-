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
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);

	ListNode *temp = head;
	ListNode *prev = NULL;
    ListNode* first=head;
	ListNode* second=temp;
	// while(first){
	// 	cout<<first->val<<" ";
	// 	first=first->next;
	// }
	// cout<<endl;

	while (first)
	{
		ListNode *forw = first->next;
		first->next = prev;
		prev = first;
		first = forw;
	}
	while(prev){
		cout<<prev->val<<" ";
		prev=prev->next;
	}
	cout<<endl;
	while(second){
		cout<<second->val<<" ";
		second=second->next;
	}
	cout<<endl;
	
	// cout<<endl;
	// temp = head;
	// while(first){
	// 	cout<<first->val<<" ";
	// 	first=first->next;
	// }
	
	// while (temp)
	// {
	// 	if (temp->val != prev->val)
	// 	{
	// 		return false;
	// 	}
	// 	temp = temp->next;
	// 	prev = prev->next;
	// }
	// return true;
}