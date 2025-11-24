#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<char, int> mp;
    string s; cin>>s;

    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    if(mp['1']==mp['0']) cout<<0 <<endl;
    else if(mp['1']<mp['0']) cout<<n-mp['1']*2 <<endl;
    else cout<<n-mp['0']*2;

    return 0;
}