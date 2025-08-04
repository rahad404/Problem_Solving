#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s;
    cin >>s;

    map<string,int> tg;
    for(int i=0;i<n-1;i++){
        string temp = string(1,s[i])+s[i+1];
        tg[temp]++;
    }

    string max_key;
    int max_val=0;
    for(auto& pair:tg){
        if(pair.second>max_val){
            max_key = pair.first;
            max_val = pair.second;
        }
    }
    cout<<max_key<<endl;

    return 0;
}