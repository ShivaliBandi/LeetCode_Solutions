/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *resultList,*temp;
    if(list1==NULL && list2==NULL)
    {
        return NULL;
    }
    else if(list1==NULL &&list2!=NULL)
    {
        return list2;
    }
    else if(list2==NULL &&list1!=NULL)
    {
        return list1;
    }
    else
    {
         if(list1->val<=list2->val)
        {
            resultList=list1;
            
            list1=list1->next;
        }
        else
        {
            resultList=list2;
            list2=list2->next;
        }
    temp=resultList;
    while(list1!=NULL && list2!=NULL)
    {
        if(list1->val<=list2->val)
        {
            resultList->next=list1;
            list1=list1->next;
            
           
        }
        else
        {
            resultList->next=list2;
            list2=list2->next;
           
        }
        resultList=resultList->next;
    }
    if(list1!=NULL)
        resultList->next=list1;
    else
        resultList->next=list2;
    
    }
    
    return temp;
}
