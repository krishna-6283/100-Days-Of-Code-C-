#include <iostream>
using namespace std;

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
	ListNode *h1 = l1;
	ListNode *h2 = l2;
	ListNode *l3 = new ListNode(0);
	ListNode *h3 = l3;

	int carry = 0;
	while (h1 || h2)
	{
		int sum = carry + (h1 ? h1->val : 0) + (h2 ? h2->val : 0);
		h3->next = new ListNode(sum % 10);
		carry = sum / 10;
		if (h1)
			h1 = h1->next;
		if (h2)
			h2 = h2->next;
		h3 = h3->next;
	}

	if (carry == 1)
	{
		h3->next = new ListNode(1);
	}
	return l3->next;
}
