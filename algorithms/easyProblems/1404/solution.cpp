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
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode * tmp = head;
        while(tmp != NULL){
            tmp = tmp->next;
            cnt++;
        }
        cnt /= 2;

        for(int i = 0; i < cnt; i++){
            head = head->next;
        }
        return head;
    }
};
