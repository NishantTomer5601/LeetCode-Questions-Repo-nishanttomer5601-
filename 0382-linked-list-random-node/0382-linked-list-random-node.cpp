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
    ListNode* temp=NULL;
    Solution(ListNode* head) {
        temp=head;
        
    }
    
    int getRandom() {
        ListNode* t=temp;
        int len=0;
        while(t){
            len++;
            t=t->next;
        }
        t=temp;
        
        int a=rand()%len;
        int count=0;
        while(count!=a){
            t=t->next;
            count++;
            
        }
        return t->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */