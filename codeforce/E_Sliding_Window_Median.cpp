#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >>n >>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }


    
    multiset<int> m;
    for(int i=0;i<n;i++){
        if(i>=k) m.erase(m.find(v[i-k]));

        m.insert(v[i]);

        if(i>=k-1){
            int mid=(k-1)/2;
            int result = *next(m.begin(), mid);
            cout<< result <<" ";
        }
    }


    // int l=0,r=k-1;
    // while(r<n){
    //     multiset<int> m;
    //     m.insert(v.begin() + l, v.begin() + r + 1);
    //     int mid=(k-1)/2;
    //     int result = *next(m.begin(), mid);
    //     cout<< result <<" ";
    //     l++; r++;
    // }


    // TLE WAY
    // int l=0, r=k-1;
    // while(r<n){
    //     vector<int> tempv(v.begin()+l, v.begin()+r+1);
    //     sort(tempv.begin(), tempv.end());
     
    //     int m = (k-1)/2;
    //     cout<<tempv[m]<<" ";
    //     l++; r++; 
    // }



    return 0;
}