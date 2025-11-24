#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int, int> arr;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            arr[x]++;
        }
        int c=0;
        for(const auto& pair : arr){
            if(pair.first<pair.second)c+=pair.second-pair.first;
            else if(pair.first>pair.second)c+=pair.second;
        }
        cout<<c <<endl;
    }

    return 0;
}