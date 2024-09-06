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

 


    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(!head) return head;
        unordered_map<int,int> map;
        for(auto it:nums){
            map[it]++;
        }

        ListNode * n=new ListNode(0);
        ListNode* h=n;
        ListNode* temp=head;

        while(temp!=NULL){

            if(map.find(temp->val)==map.end()){
                ListNode* nn=new ListNode(temp->val);
                n->next=nn;
                n=nn;
            }

            temp=temp->next;
        }


   return h->next;
        
    }
};