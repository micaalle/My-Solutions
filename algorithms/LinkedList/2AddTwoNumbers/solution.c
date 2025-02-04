/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    int overflow = 0;
    struct ListNode *ret = malloc(sizeof(struct ListNode));  
    struct ListNode *temp = ret;  
    
    // The first hard coded version of this had me counting the lengths of both Link lists and setting in a for loop because I forgot you could just allocate memory when needed

    while (l1 != NULL || l2 != NULL || overflow != 0) {
        int val = overflow;
        
        if (l1 != NULL) {
            val += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            val += l2->val;
            l2 = l2->next;
        }
        
        // I originally had the code changing overflow constantly and was manualy setting it to 0 because I forgot just dividing it by 10 would give either or. This took out like 10 lines
        overflow = val / 10;
        val = val % 10;  
        

        temp->next = malloc(sizeof(struct ListNode));  
        
        temp = temp->next;  
        temp->val = val;  
        temp->next = NULL; 
    }

    return ret->next;
}
