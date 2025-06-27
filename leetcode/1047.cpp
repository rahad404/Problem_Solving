#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

string removeDuplicates(string s) {
    vector<char> str;
    for(char x:s){
        if(!str.empty() && str.back()==x){
            str.pop_back();
        }
        else{
            str.push_back(x);
        }
    }
    string result(str.begin(), str.end());
    return result;
}

int main(){
    string s;
    cin >> s;
    cout<<"duplicate removed: "<< removeDuplicates(s)<<endl;
}