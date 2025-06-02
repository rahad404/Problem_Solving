#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int min;
        for(int j=0;j<n-1;j++){
            for(int k=1;k<n;k++){
                if(j==0){
                    min = gcd(arr[j], arr[k]);
                }
                else{
                    int gc = gcd(min, arr[k]);
                    if(gc<min)min=gc;
                }
            }
        }
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[j]!=min)c++;
        }
        cout<<c;
    }
}