#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
int main(){
	Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    Node* temp = head;  // Use a temporary variable for traversal
    int count = 0;

    while (temp) {
        temp = temp->next;
        count++;
    }

    std::cout << "Number of nodes: " << count << std::endl;
	int k=3;
	int x =count-k;
	temp=head;
	while(x>1){
		temp=temp->next;
		x--;
	}
	cout<<temp->data<<endl;
	temp->next=temp->next->next;
	temp=head;
	while (temp) {
		cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;

}