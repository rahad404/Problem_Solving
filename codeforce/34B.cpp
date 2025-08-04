#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n >>m;

    vector<int> v;
    for(int i=0;i<n;i++){
        int n; cin>>n;
        if(n<0){
            n*=-1;
            v.push_back(n);
        }
    }
    
    sort(v.begin(), v.end(), greater<>());

    int s=0;
    if(v.size()<m){
        for(int x:v){
            s+=x;
        }
    }
    else{
        for(int i=0;i<m;i++){
            s+=v[i];
        }
    }
    cout<<s<<endl;
    return 0;
}