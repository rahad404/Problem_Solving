#include<bits/stdc++.h>
using namespace std;

int prev_pow_two(int n){
    int p=1;
    while(p<=n) p <<= 1;
    if(p==n)return p;
    return p >> 1;
}

int main(){
    int x;
    cin>> x;

    int bacteria=0;
    while (x>0){
        int pp = prev_pow_two(x);
        x = x-pp;
        bacteria++;
    }
    cout<<bacteria;
    

    return 0;
}