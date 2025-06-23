#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode node;
    ListNode* tail = &node; 

    while(list1!=NULL && list2!=NULL){
        if(list1->val<list2->val){
            tail->next = list1;
            list1 = list1->next;
        }
        else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1!=NULL) tail->next = list1;
    else tail->next = list2;

    return node.next;
}

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

void printList(ListNode* head){
    ListNode* point = head;
    while(point != NULL){
        cout<< point->val<< "->";
        point = point->next;
    }
    cout<<endl;
}

int main(){
    ListNode* list1 = NULL;
    ListNode* list2 = NULL;

    insertlast(list1, 1);
    insertlast(list1, 2);
    insertlast(list1, 4);

    insertlast(list2, 1);
    insertlast(list2, 3);
    insertlast(list2, 4);

    printList(list1);
    printList(list2);

    ListNode* mergedList = mergeTwoLists(list1, list2);
    printList(mergedList);
}