#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >>n >>d;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >>a[i];
    sort(a.begin(), a.end());

    int m, ruble=0; 
    cin >>m;

    if(m>=n){
        for(int i=0; i<n; i++) ruble += a[i];
        d*=(m-n);
        ruble-=d;
        cout << ruble;
    }
    else{
        for(int i=0; i<m; i++) ruble += a[i];
        cout << ruble;
    }

    return 0;
}