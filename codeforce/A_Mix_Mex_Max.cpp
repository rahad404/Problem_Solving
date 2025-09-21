#include<bits/stdc++.h>
using namespace std;

int mex(int a, int b, int c){
    int mx = max(a, b, c);
    int mn = min(a, b, c);
    if(mn>1){
        return mn-1;
    }
    else{ }
}

int main(){
    int t; 
    cin >>t;

    while(t--){
        int n;
        cin >>n;

        vector<int> v(n);
        for(int i=0;i<n;i++) cin >>v[i];

        for(int i=0;i<n-2;i++){
            if(v[i]!=-1 && v[i+1]!=-1 && v[i+2]!=-1){
                
            }
        }
    }

    return 0;
}