#include<iostream>
#include<vector>
using namespace std;

string reversePrefix(string word, char ch) {
    int index = word.find(ch);
    if(index == string::npos)return word;

    vector<char> stk;
    for(int i=0;i<=index;i++){
        stk.push_back(word[i]);
    }
    string result;
    for(int i=0;i<=index;i++){
        result+=stk.back();
        stk.pop_back();
    }
    for(int i=index+1;i<word.size();i++){
        result+=word[i];
    }
    return result;
}
int main(){
    string s; char c;
    cin>>s;
    cin>>c;
    cout<<s<<endl;
    cout<<reversePrefix(s,c);
}