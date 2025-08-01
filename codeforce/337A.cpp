#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,g;
    cin >>s >>g;

    vector<int> gifts;
    for(int i=0;i<g;i++){
        int x; cin >>x;
        gifts.push_back(x);
    } 
    sort(gifts.begin(),gifts.end());

    int k=g-s+1;
    int minDif=INT_MAX;
    for(int i=0;i<k;i++){
        int x = gifts[i+s-1]-gifts[i];
        minDif = min(minDif, x);
    }

    cout<<minDif;
}