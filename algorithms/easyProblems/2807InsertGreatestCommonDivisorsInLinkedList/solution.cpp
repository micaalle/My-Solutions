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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode * ret = head;
        while(head->next != NULL){
            int gcd = min(head->val, head->next->val);
            while(head->val % gcd != 0 || head->next->val % gcd != 0){
                gcd--;
            }
            ListNode* tmp = new ListNode(gcd);
            tmp->next = head->next;
            head->next = tmp;
            head = tmp->next;
        }
        return ret;
    }
};
