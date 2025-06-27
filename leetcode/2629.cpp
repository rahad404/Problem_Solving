#include<iostream>
#include<vector>
using namespace std;

int minLength(string s) {
    vector<char>stk;
    for(auto x:s){
        if(stk.empty())stk.push_back(x);
        else if((stk.back()=='A'&&x=='B') || (stk.back()=='C'&&x=='D'))stk.pop_back();
        else stk.push_back(x);
    }
    return stk.size();
}

int main(){
    string s;
    cin >>s;
    cout<<"newlen: "<<minLength(s);
}
