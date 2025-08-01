#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();

    if(n==1 && s[0]>='a' && s[0]<='z'){
        char x = s[0]-32;
        cout<<x;
        return 0;
    }

    bool capson = true;
    string ns;
    for(int i=1; i<n;i++){
        if(s[i]>='a'&& s[i]<='z'){
            capson = false;
            break;
        }
    }
    if(capson){
        for(char x:s){
            if(x>='a'&&x<='z')x-=32;
            else x+=32;
            ns+=x;
        }
        cout<<ns;
    }
    else{
        cout<<s;
    }
    return 0;
}