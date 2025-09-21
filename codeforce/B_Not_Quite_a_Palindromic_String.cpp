#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        int n,k;
        cin >>n >>k;
        string s; 
        cin >>s;

        int z=0,o=0;
        for(char x:s){
            x=='1'? o++ : z++;
        }

        int min_p = abs(z-o)/2;

        if(k<min_p) cout <<"NO" <<endl;
        else if((k-min_p)%2==0) cout <<"YES" <<endl;
        else cout <<"NO" <<endl;
        
    }

    return 0;
}