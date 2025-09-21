#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    
    vector<pair<int, int>> pq(n);
    for(int i=0;i<n;i++){
        cin >>pq[i].first >>pq[i].second;
    }
    sort(pq.begin(), pq.end());

    bool alex=false;
    for(int i=0;i<n-1;i++){
        if(pq[i].second>pq[i+1].second){
            alex = true;
            break;
        }
    }

    if(alex) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;

    return 0;
}