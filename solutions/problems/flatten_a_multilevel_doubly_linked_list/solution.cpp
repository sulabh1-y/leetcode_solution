/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) 
    {
        if(head==NULL)
        {
            return head;
        }   

        else
        {
            Node *cur,*temp;
            cur=head;

            while(cur!=NULL)
            {
                if(cur->child!=NULL)
                {
                    Node *tail;
                    temp=cur->next;
                    tail=flatten(cur->child);
                    cur->next=tail;
                    cur->next->prev=cur;
                    cur->child=NULL;
                    while(cur->next!=NULL)
                    {
                        cur=cur->next;
                    }
                    if(temp!=NULL)
                    {
                        cur->next=temp;
                        temp->prev=cur;
                    }
                }
                cur=cur->next;
            }
            return head;
        }
    }
};