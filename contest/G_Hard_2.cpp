#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    string s;
    cin >>s;

    map<string,int> twogram;

    for(int i=0;i<n-1;i++){
        string tg;
        tg+=s[i];
        tg+=s[i+1];
        twogram[tg]++;
    }
    
    int max_cnt=0;
    string max_tg;
    for(auto x:twogram){
        if(x.second>max_cnt){
            max_cnt = x.second;
            max_tg = x.first;
        }
    }
    cout<<max_tg<<endl;
    
    return 0;
}