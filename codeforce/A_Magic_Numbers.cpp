#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>s;

    bool yes=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1'&&(s[i+1]=='1'||
            (s[i+1]=='1'&&s[i+2]=='4')||
            (s[i+1]=='1'&&s[i+2]=='4'&&s[i+2]=='4'))){
            yes=1;
            break;
        }
        else if((s[i]=='1'&&s[i+1]=='4')&&(s[i+2]=='1'||
            (s[i+2]=='1'&&s[i+3]=='4')||
            (s[i+2]=='1'&&s[i+3]=='4'&&s[i+4]=='4'))){
            yes=1;
            break;               
        }
        else if((s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')&&(s[i+3]=='1'||
            (s[i+3]=='1'&&s[i+4]=='4')||
            (s[i+3]=='1'&&s[i+4]=='4'&&s[i+5]=='4'))){
            yes=1;
            break;
        }
    }

    if((s.size()==1 && s[0]=='1')||
        (s.size()==2 && s[0]=='1' && s[1]=='4')||
        (s.size()==3 && s[0]=='1' && s[1]=='4' && s[2]=='4')){
        yes=1;
    }

    if(yes)cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
    
    return 0;
}