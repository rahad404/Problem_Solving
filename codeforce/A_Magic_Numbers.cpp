#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;

    if((s.find("444")!=s.npos)||s[0]=='4'){
        cout<<"NO" <<endl;
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]!='4' && s[i]!='1'){
                cout<<"NO" <<endl;
                return 0;
            }
        }
        cout<<"YES" <<endl;
    }

    return 0;
}