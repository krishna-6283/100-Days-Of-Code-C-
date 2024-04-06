#include<bits/stdc++.h>
using namespace std;
//  * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        if(head==nullptr){
            return NULL;
        }
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return NULL;
        }
        int x=count/2;
        temp=head;
        while(x>1){
            temp=temp->next;
            x--;
        }
        if(temp->next->next!=nullptr) temp->next=temp->next->next;
        else temp->next=nullptr;
        return head;
    }
};