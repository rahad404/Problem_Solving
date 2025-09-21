#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    vector<int> shop(n);
    for(int i=0;i<n;i++) cin >>shop[i];
    int m; cin >>m;
    vector<int> coin(m);
    for(int i=0;i<m;i++) cin >>coin[i]; 

    sort(shop.begin(),shop.end());
    for(int i=0;i<m;i++){
        auto up = upper_bound(shop.begin(), shop.end(), coin[i]);
        cout<< (up-shop.begin()) <<endl;
    }

    return 0;
}