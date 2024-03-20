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
        
        ListNode* temp=list1;
        int count=0;
        while(count<a-1){
            temp=temp->next;
            count++;
        }
        
        ListNode* tempp=list2;
        ListNode* t=temp->next;
        temp->next=list2;
        while(tempp->next)tempp=tempp->next;
        
        int x=b-a;
        count=0;
        while(count<=x){
            t=t->next;
            count++;
            
        }
        tempp->next=t;
        return list1;
        
    }
};