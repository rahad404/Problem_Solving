#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >>t;
    while(t--){
        map<char, int> mp;
        string s; cin>>s;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        int move;
        if(mp['1']==mp['0']) move=mp['1'];
        else if(mp['1']<mp['0']) move=mp['1'];
        else move=mp['0'];
        
        if(move%2==0) cout<<"NET" <<endl;
        else cout<<"DA" <<endl;
    }

    return 0;
}