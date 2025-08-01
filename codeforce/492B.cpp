#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l;
    cin>>n >>l;
    vector<int> lanterns(n);
    for(int i=0;i<n;i++){
        cin>> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());
    
    double radius=max(lanterns[0], l-lanterns[n-1]);
    for(int i=0;i<n-1;i++){
        double r = (lanterns[i+1]-lanterns[i])/2.0;
        if(r>radius)radius=r;
    }
    cout<<fixed<<setprecision(10)<<radius;
}