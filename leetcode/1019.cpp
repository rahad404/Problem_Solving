#include <iostream>
#include <vector>
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

vector<int> nextLargerNodes(ListNode* head) {
    vector<int> l_valu;
    ListNode* curr = head;
    while (curr!=NULL){
        ListNode* point = curr->next;
        int found = 0;
        while(point!=NULL){
            if(curr->val<point->val){
                l_valu.push_back(point->val);
                found = 1;
                break;
            }
            point=point->next;
        }
        if(!found)l_valu.push_back(0);
        curr=curr->next;
    }
    return l_valu;   
}

int main(){
    ListNode* list1 = NULL;

    insertlast(list1, 2);
    insertlast(list1, 1);
    insertlast(list1, 5);
    // insertlast(list1, 4);
    // insertlast(list1, 5);
    printList(list1);
    cout<<endl;

    vector<int> value = nextLargerNodes(list1);
    for(int x: value){
        cout<<x;
    }

}