#include<iostream>
#include<unordered_map>
#include<cstring>
#include<queue>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int>count;
    queue<pair<char, int>> q;

    for(int i=0;i<s.length();i++){
        count[s[i]]++;
        q.push({s[i], i});

        while(!q.empty() && count[q.front().first]>1){
            q.pop();
        }
    }
    
    if(!q.empty()) return q.front().second;
    return -1;
}

/**
int firstUniqChar(string s) {
    int count[26];
    memset(count, 0, sizeof(count));

    for(char c:s){
        count[c-'a']++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
}
**/

int main(){
    string s;
    cin>>s;
    cout<<firstUniqChar(s);
}