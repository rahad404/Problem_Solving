#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int x, y;
    set<int> s;
    cin>> x;
    for(int i=0;i<x;i++){
        int k; cin>>k;
        s.insert(k);
    }
    cin>> y;
    for(int i=0;i<y;i++){
        int k; cin>>k;
        s.insert(k);
    }

    if(n==s.size()){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}