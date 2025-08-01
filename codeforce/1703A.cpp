#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        string c ="YES";
        for(int i=0;i<3;i++){
            if(s[i]<='z'&&s[i]>='a')s[i]-=32;
        }
        if(s==c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}