class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*beforHead = new ListNode(0);
        ListNode*afterHead = new ListNode(0);
        ListNode*befor = beforHead;
        ListNode*after = afterHead;

        while(head != NULL){
            if(head->val < x){
                befor->next = head;
                befor = befor->next;
            }
            else{
                after->next = head;
                after = after->next;
            }
            head = head->next;
        } 
        after->next = NULL;
        befor->next = afterHead->next;

        return beforHead->next;
    }
};
