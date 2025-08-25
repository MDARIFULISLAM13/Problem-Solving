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
    ListNode* deleteMiddle(ListNode* head) {
         int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            ++cnt;
            temp=temp->next;

        }
        if(cnt==1){
            head=NULL;
        }
        cnt/=2;

         temp=head;
        while(temp!=NULL){
             --cnt;
            if(cnt==0){
                ListNode* tmp=temp->next;
                tmp=tmp->next;
                temp->next=tmp;
                break;
            }

             temp=temp->next;
        }

    return head;
    }
};