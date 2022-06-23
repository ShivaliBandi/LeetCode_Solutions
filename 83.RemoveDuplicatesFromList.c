/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
struct ListNode *temp=head;
    if(head==NULL || head->next==NULL)
        return head;
    while(head->next!=NULL && head!=NULL)
        if(head->next->val==head->val)
            head->next=head->next->next;
        else
            head=head->next;
        
    
    return temp;
}
