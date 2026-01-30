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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ret = head->next;

        while (head != NULL) {
            if (head->val != 0) {
                ListNode* tmp = head->next;
                while (tmp != NULL && tmp->val != 0) {
                    head->val += tmp->val;
                    tmp = tmp->next;
                }
                head->next = (tmp ? tmp->next : nullptr);
            }
            head = head->next;
        }
        return ret;
    }
};
