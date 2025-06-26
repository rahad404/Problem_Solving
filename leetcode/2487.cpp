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
    ListNode* next = NULL;
    while (curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    ListNode* h1 = prev;
    while(prev->next!=NULL){
        if(prev->val <= prev->next->val){
            prev=prev->next;
        }
        else{
            ListNode* temp = prev->next;
            prev->next = prev->next->next;
            delete temp;
        }
    }

    ListNode* prev2 = NULL;
    ListNode* curr2 = h1;
    ListNode* next2 = NULL;
    while (curr2!=NULL){
        next2 = curr2->next;
        curr2->next = prev2;
        prev2 = curr2;
        curr2 = next2;
    }

    return prev2;
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