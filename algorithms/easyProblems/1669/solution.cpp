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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int idx = 0;
        ListNode * node = list1;
        while(idx != a - 1){
            node = node->next;
            idx++;
        }

        ListNode * start = node;



        while(idx != b){
            node = node->next;
            idx++;
        }

        start->next = list2;



        ListNode * tmp = list2;

        while(tmp->next != NULL){
            tmp = tmp->next;
        }

        tmp->next = node->next;

        return list1;
    }
};
