#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        cin >>n;
        string str, nm;
        cin >>str >>nm;

        map<char, int> Str, Nm;
        for(int i=0; i<n; i++){
            Str[str[i]]++;
        }
        for(int i=0; i<n; i++){
            Nm[nm[i]]++;
        }

        if(Str == Nm) cout <<"YES" <<endl;
        else cout <<"NO" <<endl;  
    }

    return 0;
}