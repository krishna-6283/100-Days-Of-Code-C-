#include<iostream>
using namespace std;
#include<vector>
class ListNode{
	public:
	int val;
	ListNode* next;
	ListNode* prev;
	ListNode(int x){
		val=x;
		next=NULL;
		prev=NULL;
	}
	ListNode(int x, ListNode* n, ListNode* p){
		val=x;
		next=n;
		prev=p;
	}
};

ListNode* ArrayToDoubly(vector<int> &arr){
	ListNode* head=new ListNode(arr[0]);
	ListNode* prev=head;
	for(int i=1;i<arr.size();i++){
		ListNode* temp=new ListNode(arr[i]);
		temp->prev=prev;
		prev->next=temp;
		prev=temp;
	}
	return head;

}

ListNode* deleteHead(ListNode* head){
	ListNode* temp=head;
	temp->next->prev=NULL;
	temp=temp->next;
	return temp;
}

ListNode* deleteTail(ListNode* head){
	ListNode* temp=head;
	ListNode* prev=NULL;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;

	}
	prev->next=NULL;
	head->prev=NULL;
	return head;
}
void display(ListNode* head){
	ListNode* temp=head;
	while(temp){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
}
int main(){
	vector<int> arr = {1,2,3,4,5};
	ListNode* head=ArrayToDoubly(arr);
	display(head);
	cout<<endl;
	head=deleteHead(head);
	display(head);
	cout<<endl;
	head=deleteTail(head);
	display(head);
	return 0;
}