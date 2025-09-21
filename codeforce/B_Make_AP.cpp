#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while (t--){
        int a, b, c;
        cin >>a >>b >>c;

        if(a==b && b==c)cout<<"YES"<<endl;
        else if(abs(a-b)==abs(b-c))cout<<"YES"<<endl;
        else{
            int n_a = b-(c-b);
            if(n_a>a && n_a%a==0 && a!=0) cout<<"YES"<<endl;
            int n_b = ;
            if(n_a>a && n_a%a==0 && a!=0) cout<<"YES"<<endl;
            int n_a = b-(c-b);
            if(n_a>a && n_a%a==0 && a!=0) cout<<"YES"<<endl;
        }
    }
    

    return 0;
}