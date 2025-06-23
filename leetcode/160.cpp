#include <iostream>
#include<unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

void insertlast(ListNode*& node, int value){
    ListNode* n = new ListNode;
    n->val = value;
    n->next = NULL;
    
    if(node==NULL){
        node=n;
    }
    else{
        ListNode* point = node;
        while (point->next!=NULL){
            point = point->next;
        }
        point->next=n; 
    }
}

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

int main(){
    ListNode* list1 = NULL;
    ListNode* list2 = NULL;

    insertlast(list1, 4);
    insertlast(list1, 1);
    insertlast(list1, 8);
    insertlast(list1, 4);
    insertlast(list1, 5);

    insertlast(list2, 5);
    insertlast(list2, 6);
    insertlast(list2, 1);
    insertlast(list2, 8);
    insertlast(list2, 4);
    insertlast(list2, 5);

    ListNode* intersection = getIntersectionNode(list1, list2);
    if(intersection!= nullptr)cout<<intersection->val<<endl;
    else cout<<"No intersection"<<endl;
}