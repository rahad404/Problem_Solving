#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int s=0, d=0;
    int l=0, r=n-1;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[l]>v[r]){
                s+=v[l];
                l++;
            }
            else{
                s+=v[r];
                r--;
            }
        }
        else{
            if(v[l]>v[r]){
                d+=v[l];
                l++;
            }
            else{
                d+=v[r];
                r--;
            }
        }
    }
    cout<<s <<" "<<d;


    return 0;
}