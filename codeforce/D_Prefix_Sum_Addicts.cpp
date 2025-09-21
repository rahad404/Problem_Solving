#include<bits/stdc++.h>
using namespace std;

// UNSOLVED
int main(){
    int t; cin >>t;
    while(t--){
        int n,k;
        cin >>n >>k;
        vector<int> ps(k), nm(k);
        for(int i=0;i<k;i++){
            int x; cin>>x;
            if(i==0){
                ps[i]=x;
                nm[i]=x;
            }
            else{
                ps[i]=x;
                nm[i]=x-ps[i-1];
            }
        }


    }

    return 0;
}