#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >>t;
    while(t--){
        long long n, k, x;
        cin >>n >>k >>x;
        // n=1....n  k=distinct_number x=sum_of distinct
    
        long long sum_min = k*(k+1)/2;
        long long sum_max = (n*(n+1)/2)-((n-k)*(n-k+1)/2);
        if(x>=sum_min && x<=sum_max)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}