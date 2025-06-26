#include <iostream>
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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    if(len==n){
        ListNode* del = head;
        head = head->next;
        delete del;
    }

    temp=head;
    for(int i=1;i<=len-n;i++){
        if(i==len-n){
            ListNode* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        temp= temp->next;
    }
    return head;
}

int main(){
    ListNode* list1 = NULL;

    insertlast(list1, 1);
    insertlast(list1, 2);
    insertlast(list1, 3);
    insertlast(list1, 4);
    insertlast(list1, 5);
    printList(list1);
    cout<<endl;
    printList(removeNthFromEnd(list1, 2));

}