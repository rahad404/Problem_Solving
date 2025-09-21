#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >>n >>m;
    
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >>a[i];
    
    vector<int> dist(n);
    set<int> u;
    for(int i=n-1; i>=0; i--){
        u.insert(a[i]);
        dist[i]=u.size();
    }

    for(int i=0;i<m;i++){
        int l; cin >>l;
        cout <<dist[l-1] <<endl;
    }



    // TLE
    // for(int i=0;i<m;i++) {
    //     int l;
    //     cin >> l;
    //     set<int> s;
    //     s.insert(a.begin()+l-1, a.end());
    //     cout<< s.size() <<endl;
    // }

    return 0;
}