#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >>n >>m;
    vector<int> v(m);
    for(int i=0;i<m;i++)cin>>v[i];

    long long moves=0, pos = 1;
    for(int i=0;i<m;i++){
        if(pos<v[i]){
            moves+=v[i]-pos;
            pos = v[i];
        }
        else if(pos>v[i]){
            moves+=v[i]+(n-pos);
            pos = v[i];
        }
    }
    cout<<moves<<endl;


    return 0;
}