#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    map<string, int> m;
    while(n--){
        string s; cin >>s;
        m[s]++;
    }
 
    int mg=0;
    string wt;
    for(auto x:m){
        if(x.second>mg){
            mg = x.second;
            wt = x.first;
        }
    } 
    cout << wt <<endl;

    return 0;
}