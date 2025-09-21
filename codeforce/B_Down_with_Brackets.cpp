#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;

        bool possible=false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==')'  && s[i+1]=='('){
                possible = true;
                break;
            }
        }
        if(possible)cout <<"YES" <<endl;
        else cout <<"NO" <<endl;

    }

    return 0;
}