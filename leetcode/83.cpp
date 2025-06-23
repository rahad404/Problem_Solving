#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

ListNode* head = NULL; 

void insertAtFirst(int v){
    ListNode *n1 = new ListNode;
    n1->val = v;
    n1->next = NULL;
    if(head==NULL){
        head = n1;
    }
    else{
        n1->next = head;
        head = n1;
    }
}

void printList(){
    ListNode* point = head;
    while(point != NULL){
        cout<< point->val<< "->";
        point = point->next;
    }
    cout<<endl;
}

ListNode* deleteDuplicates() {
    ListNode* point = head;
    while(point != NULL && point->next != NULL){
        if(point->val == point->next->val){  
            ListNode* temp = point->next;
            point->next = point->next->next;
            delete temp;
        }
        else{
            point = point->next;
        }
    }
    return head;
}

int main(){
    insertAtFirst(1);
    insertAtFirst(1);
    insertAtFirst(2);
    insertAtFirst(2);
    insertAtFirst(3);

    printList();
    deleteDuplicates();
    printList();
}