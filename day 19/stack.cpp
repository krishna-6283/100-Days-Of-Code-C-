#include <iostream>
using namespace std;

class Stack
{
	int *arr;
	int top;
	int capacity;

public:
	Stack(int cap)
	{
		capacity = cap;
		top = -1;
		arr = new int[cap];
	}

	void push(int x)
	{
		if (top == capacity - 1)
		{
			cout << "Stack overflow" << endl;
			return;
		}
		top++;
		arr[top] = x;
	}

	void pop()
	{
		if (top == -1)
		{
			cout << "Stack underflow" << endl;
			return;
		}
		top--;
	}

	int peak()
	{
		if (top == -1)
		{
			cout << "There is no element in the stack"<<endl;
			return -1;
		}
		return arr[top];
	}

	bool isEmpty()
	{
		return top == -1;
	}

	int size()
	{
		return top + 1;
	}
};

class ListNode{
public:
	int val;
	ListNode* next;
	ListNode(int x){
		val=x;
		next=NULL;
	}
};
void display(Stack s){
	while(!s.isEmpty()){
		cout<<s.peak()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main()
{
	Stack s(5);
	s.pop();
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.pop();
	s.push(6);
	display(s);

	return 0;
}