#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;

    int n;
    cin >>n;

    vector<pair<int,int>> q(n);
    for(int i=0; i<n; i++) cin>> q[i].first >>q[i].second;
    
    int len=s.size();
    vector<int> pre(len, 0);
    for(int i=1;i<len;i++){
        pre[i]=pre[i-1]+(s[i]==s[i-1]);
    }

    for(int i=0;i<n;i++){
        int l = q[i].first-1;
        int r = q[i].second-1;
        cout << pre[r] - pre[l] <<endl;
    }

    // ----------TLE-----------
    // for(int i=0; i<n; i++){
    //     int sum=0;
    //     for(int j=q[i].first-1; j<q[i].second-1; j++){
    //         if(s[j]==s[j+1]) sum++;
    //     }
    //     cout <<sum <<endl;
    // }


    return 0;
}