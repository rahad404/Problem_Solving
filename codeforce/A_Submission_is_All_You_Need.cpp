#include<bits/stdc++.h>
using namespace std;

int mex(vector<int> v, int r){
    int m =0;
    for(int i=0;i<r;i++){
        if(v[0]!=0){
            m = v[0]-1;
            return m;
        }
        else if(v[i+1]-v[i]>1){
            return m;
        }
        
    }
    return 0;
}


int main(){
    int t; 
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int> v;
        for(int i=0;i<n;i++)cin >>v[i];

        int max_score=0;
        for(int i=0;i<n;i++){
            int m = mex(v, i);

        }

    }

    return 0;
}