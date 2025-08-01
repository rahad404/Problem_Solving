#include<iostream>
#include<vector>
using namespace std;
/*
string makeGood(string s) {
    vector<char> stk;
    for(int i=s.size()-1;i>=0;i--){
        stk.push_back(s[i]);
    }

    string result;
    while(!stk.empty()){
        char temp = stk.back();
        stk.pop_back();
        if(!stk.empty() && abs(temp - stk.back()) == 32){
            stk.pop_back();
        }
        else{
            result+=temp;
        }
    }
    return result;
}
*/
string makeGood(string s) {
    vector<char> stk;
    for(int i=s.size()-1;i>=0;i--){
        if(!stk.empty() && abs(stk.back()-s[i])==32){
            stk.pop_back();
        }
        else{
            stk.push_back(s[i]);
        }
    }
    string result;
    while(!stk.empty()){
        result+=stk.back();
        stk.pop_back();
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    cout<<makeGood(s);
}