#include <iostream>
#include<cmath>
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

ListNode* rotateRight(ListNode* head, int k){
    if (!head || !head->next || k == 0) return head;

    ListNode* temp = head;
    int len=1;
    while(temp->next!=NULL){
        temp=temp->next;
        len++;
    }
    temp->next = head;

    k = k%len;
    int n = len-k;
    for(int i=0;i<n;i++){
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    
    return head;
}

int main(){
    ListNode* list1 = NULL;

    insertlast(list1, 0);
    insertlast(list1, 1);
    insertlast(list1, 2);
    // insertlast(list1, 4);
    // insertlast(list1, 5);
    printList(list1);
    cout<<endl;
    int n; cin>>n;
    printList(rotateRight(list1, n));

}