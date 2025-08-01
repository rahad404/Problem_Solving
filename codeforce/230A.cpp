#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin >>s >>n;

    multimap<int,int> level;
    for(int i=0;i<n;i++){
        int key,value;
        cin >>key >>value;
        level.insert({key,value});
    }

    bool win=true;
    for(auto& p:level){
        if(s>p.first){
            s+=p.second;
        }
        else{
            win = false;
        }
    }

    if(win)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}