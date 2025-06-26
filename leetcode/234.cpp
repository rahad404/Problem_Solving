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

bool isPalindrome(ListNode* head){
    int length=0;
    
    ListNode* point = head;
    while(point!=NULL){
        length++;
        point = point->next;
    }

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;

    int i = 0;
    while(i<length/2){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        i++;
    }

    if(length%2!=0)curr=curr->next;

    while(curr!=NULL){
        if(curr->val!=prev->val)return 0;
        curr=curr->next;
        prev=prev->next;
    }
    return 1;
}

int main(){
    ListNode* list1 = NULL;

    insertlast(list1, 1);
    insertlast(list1, 2);
    insertlast(list1, 3);
    insertlast(list1, 4);
    insertlast(list1, 1);
    printList(list1);

    if(isPalindrome(list1)){
        cout<<"Palindrome";
    }
    else{
        cout<<"not Palindrome";
    }

}