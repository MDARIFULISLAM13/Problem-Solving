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
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        int cnt = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            ++cnt;
            temp = temp->next;
        }
        cnt /= 2;
        temp = head;
        while (temp != NULL)
        {
            if (cnt > 0)
            {
                cnt--;
                temp = temp->next;
            }
            else
            {
                break;
            }
        }
        return temp;
    }
};