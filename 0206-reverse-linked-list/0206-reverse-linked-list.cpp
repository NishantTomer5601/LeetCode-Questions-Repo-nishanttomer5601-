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

void solve(ListNode* &prev,ListNode* &curr,ListNode* &nextt){

    if(curr==NULL){
        return;
    }

    nextt=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextt;

    solve(prev,curr,nextt);


}



ListNode* reverseList(ListNode* head) {
 //recursive solution:

 // base case:
 if(head==NULL|| head->next ==NULL){
    return head;
 }

   ListNode * curr=head;
   ListNode * prev=NULL;
   ListNode * nextt=NULL;

 
solve(prev,curr,nextt);

return prev;
}

};

/*
if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode * curr=head;
        ListNode * prev=NULL;
        ListNode * nextt=NULL;

        while(curr!=NULL){
             nextt=curr->next;
             curr->next=prev;
             prev=curr;
             curr=nextt;

        }
        return prev;
        */