#include <iostream>
using namespace std;

bool isValid(string s){
    char store[s.length()];
    int top=-1;
    for(char x : s){
        if(x=='(' || x=='{' || x=='['){
            store[++top]=x;
        }
        else{
            if(top==-1)return false;
            char last = store[top--];

            if((x==')' && last!='(')||
                (x=='}' && last!='{')||
                (x==']' && last!='[')){
                    return false;
                }
        }
    }
    return top==-1;
}

int main(){
    string s;
    cin >> s;
    if(isValid(s))cout<<"valid";
    else cout<<"not valid";
}