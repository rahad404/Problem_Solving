/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> nodes;

    ListNode* temp = headA;
    while (temp!=NULL){
        nodes.insert(temp);
        temp=temp->next;
    }

    ListNode* temp2 = headB;
    while (temp2!=NULL){
        if(nodes.count(temp2)){
            return temp2;
        }
        temp2 = temp2->next;
    }
    return nullptr;
    }
};  