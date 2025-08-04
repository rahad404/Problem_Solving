#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n >>m;
    int day=0;
    while(n){
        n--;
        if(day%m==0){
            n++;
        }
        day++;
    }
    cout<<day-1;

    return 0;
}