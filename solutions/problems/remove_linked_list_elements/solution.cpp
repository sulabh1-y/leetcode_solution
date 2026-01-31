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
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode *p= new ListNode();
        p->next=head;
        ListNode *cur=p;
        if(head==NULL)
        {
            return head;
        }
        else
        {
            while(cur->next!=NULL)
            {
                if(cur->next->val==val)
                {
                    ListNode *temp=cur->next;
                    cur->next=cur->next->next;
                    temp->next=NULL;
                    delete temp;
                }
                else
                {
                    cur=cur->next;
                }
            }
        }
        head=p->next;
        p->next=NULL;
        delete p;
        return head;
    }
};