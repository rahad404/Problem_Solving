#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >>n >>t;
    long long num=-1;
    if(n==1){
        if(t>=2 && t<10){
            cout<<t;
        }
        else{
            cout<<-1;
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<t;
        }
    }

    return 0;
}