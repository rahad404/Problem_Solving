#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
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

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    ListNode* list1 = NULL;

    insertlast(list1, 1);
    insertlast(list1, 2);
    insertlast(list1, 4);
    insertlast(list1, 5);
    insertlast(list1, 7);
    printList(list1);
    cout<<"reversed List:"<<endl;
    printList(reverseList(list1));

}