#include<iostream>
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

int getDecimalValue(ListNode* head) {
    int length=0, number=0;
    
    ListNode* point = head;
    while(point!=NULL){
        length++;
        point = point->next;
    }

    ListNode* curr=head;
    length--;
    while(curr!=NULL){
        if(curr->val==1){
            number += pow(2,length);
        }
        
        curr=curr->next;
        length--;
    }
    return number;
}
    
int main(){
    ListNode* list1 = NULL;

    insertlast(list1, 1);
    insertlast(list1, 1);
    // insertlast(list1, 1);
    // insertlast(list1, 4);
    // insertlast(list1, 1);

    cout<<"integer:" <<getDecimalValue(list1) <<endl;
}