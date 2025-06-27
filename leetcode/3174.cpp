#include<iostream>
#include<vector>
using namespace std;

string clearDigits(string s) {
    vector<char> stk;
    for(auto x:s){
        if(stk.empty()){
            if(!isdigit(x))stk.push_back(x);
        }
        else if(isdigit(x)){
            if(!stk.empty())stk.pop_back();
        }
        else{
            stk.push_back(x);
        }
    }
    return string(stk.begin(), stk.end());
}

int main(){
    string s;
    cin >>s;
    cout<<"newlen: "<<clearDigits(s);
}

