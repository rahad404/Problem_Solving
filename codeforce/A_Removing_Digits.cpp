#include<bits/stdc++.h>
using namespace std;

int max_digit(int n){
    string s = to_string(n);
    int max_digit=0;
    for(char x:s){
        max_digit = max(max_digit, x-'0');
    }
    return max_digit;
}

int main(){
    int n, cnt=0; 
    cin>>n;
    
    while(n>0){
        int m = max_digit(n);
        n -= m;
        cnt++;
    }
    cout<< cnt <<endl;

    return 0;
}