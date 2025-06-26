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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* h1 = l1;
    ListNode* h2 = l2;
    ListNode* l3 = new ListNode(0);
    ListNode* h3 = l3;


    int carry = 0;
    while(h1!= NULL && h2 != NULL){
        int sum = (h1->val+h2->val)+carry;
        carry = sum/10;
        l3->next = new ListNode(sum%10); 
        h1 = h1->next;
        h2 = h2->next;
        l3 = l3->next;
    }
    while(h1!= NULL){
        int sum = h1->val+carry;
        carry = sum/10;
        l3->next = new ListNode(sum%10); 
        h1 = h1->next;
        l3 = l3->next;
    }
    while(h2 != NULL){
        int sum = h2->val+carry;
        carry = sum/10;
        l3->next = new ListNode(sum%10); 
        h2 = h2->next;
        l3 = l3->next;
    }
    
    if(carry)l3->next = new ListNode(carry);
    return h3->next;
}


int main(){
    ListNode* list1 = NULL;
    insertlast(list1, 2);
    insertlast(list1, 4);
    insertlast(list1, 3);
    // insertlast(list1, 4);
    // insertlast(list1, 1);

    ListNode* list2 = NULL;
    insertlast(list2, 5);
    insertlast(list2, 6);
    insertlast(list2, 4);
    // insertlast(list2, 4);
    // insertlast(list2, 9);

    printList(list1); cout<<endl;
    printList(list2); cout<<endl;
    printList(addTwoNumbers(list1, list2)); cout<<endl;

}