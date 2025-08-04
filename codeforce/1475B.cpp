#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int k=0;k<t;k++){
        int num;
        cin >>num;
        int k_max=num/2020;
        bool possible = false;
        for(int i=0;i<=k_max;i++){
            if((num-2020*i)%2021==0){
                possible=true;
                break;
            }
        }
        if(possible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}