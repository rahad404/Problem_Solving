#include<iostream>
#include<vector>
using namespace std;

int maxDepth(string s) {
    int max = 0;
    int curr = 0;
    // for(char x: s){
    //     if(x=='(')curr++;
    //     else if(x==')')curr--;
    //     if(curr>max)max = curr;
    // }
    // return max;

    vector<char>stk;
    for(char x: s){
        if(x=='(' || x==')')stk.push_back(x);
    }
    while(!stk.empty()){
        if(stk.back()==')'){
            curr++;
            stk.pop_back();
        }
        else{
            curr--;
            stk.pop_back();
        }
        
        if(curr>max)max = curr;
    }
    return max;
}

int main(){
    string s;
    cin >>s;
    cout<<"depth: "<<maxDepth(s);
}