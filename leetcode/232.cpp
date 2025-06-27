#include<iostream>
#include<stack>
using namespace std;

// MyQueue() {
    
// }

stack<int> s1;
stack<int> s2;

void push(int x) {
    s1.push(x);
}

int pop() {
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int p = s2.top();
    s2.pop();
    return p;
}

int peek() {
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    int p = s2.top();
    return p;
}

bool empty() {
    if(s1.empty())return s2.empty();
    return false;
}

int main(){

}
