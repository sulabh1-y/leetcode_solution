/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        /*int n=0;
        ListNode *temp=head;
        while(temp->next!=NULL)
        {
            n++;
            temp=temp->next;
        }   
        ListNode *cur=head;
        if(n%2==1)
        {
            n=n+1;
        }
        for(int i=0;i<n/2-1;i++)
        {
            cur=cur->next;
        }
        ListNode *p=cur->next;
        cur->next=p->next;
        p->next=NULL;
        delete p;
        return head;*/
        if (head==NULL || head->next==NULL)
        {
            return NULL;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *prev=NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            fast= fast->next->next;
            slow= slow->next;
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }

};