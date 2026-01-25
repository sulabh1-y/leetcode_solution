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
    bool isPalindrome(ListNode* head) 
    {
        std:vector<int> a;
        ListNode* temp=head;
        //int a[100],n=0;
        while(temp!=NULL)
        {
            a.push_back(temp->val);
            //a[n++]=temp->val;
            temp=temp->next;
        }    
        int i=0,j=a.size()-1;
        //int i=0.j=n-1;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};