#include<iostream>
#include<vector>
using namespace std;

string finalString(string s){
    vector<char> stk;
    for(auto x:s){
        if(stk.empty() && x!='#'){
            stk.push_back(x);
        }
        else if(x=='#'){
            if (!stk.empty()) stk.pop_back();
        }
        else{
            stk.push_back(x);
        }
    }
    string result;
    while(!stk.empty()){
        result+=stk.back();
        stk.pop_back();
    }
    return result;
}

bool backspaceCompare(string s, string t) {
    string a = finalString(s);
    string b = finalString(t);
    return a==b;
}

int main(){
    string s,t;
    cin >>s>>t;
    cout<<"same?: "<<backspaceCompare(s,t);
}