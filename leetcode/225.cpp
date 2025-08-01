#include<iostream>
#include<queue>
using namespace std;

queue<int>q;
// MyStack() {
        
// }

void push(int x) {
    q.push(x);
    int s = q.size();
    for(int i=0;i<s-1;i++){
        q.push(q.front());
        q.pop();
    }
}

int pop() {
    int val = q.front(); 
    q.pop();
    return val;
}

int top() {
    return q.front();
}

bool empty() {
    return q.empty();
}

int main(){

}