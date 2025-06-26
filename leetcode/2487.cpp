#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
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

void printList(ListNode* head){
    ListNode* point = head;
    while(point != NULL){
        cout<< point->val<< "->";
        point = point->next;
    }
    cout<<endl;
}

ListNode* removeNodes(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr!=NULL){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    ListNode* h1 = prev;
    int maxVal = h1->val;
    ListNode* temp = h1;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->val < maxVal){
            ListNode* del = temp->next;
            temp->next = temp->next->next;
            // delete del;  //cause problem in leetcode;
        }
        else{
            temp = temp->next;
            maxVal = temp->val;
        }
    }

    prev = NULL;
    curr = h1;
    while (curr!=NULL){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}


int main(){
    ListNode* list1 = NULL;
    insertlast(list1, 5);
    insertlast(list1, 2);
    insertlast(list1, 13);
    insertlast(list1, 3);
    insertlast(list1, 8);

    // insertlast(list1, 1);
    // insertlast(list1, 1);
    // insertlast(list1, 1);
    // insertlast(list1, 1);

    printList(list1); cout<<endl;
    printList(removeNodes(list1));

}