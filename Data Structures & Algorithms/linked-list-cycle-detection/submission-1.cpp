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
    bool hasCycle(ListNode* head) {
        ListNode* curr = head;
        unordered_set<ListNode*>hash;
        while(curr!=nullptr){
            if(hash.find(curr)!=hash.end()){
                return true;
            }
            hash.insert(curr);
            curr=curr->next;
        }
        return false;

    }
};
