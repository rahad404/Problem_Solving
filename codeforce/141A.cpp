#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char,int> guestHost;
    unordered_map<char,int> pile;

    string g,h,p;
    cin>> g >> h >> p;

    for(char x:g) guestHost[x]++;
    for(char x:h) guestHost[x]++;
    for(char x:p) pile[x]++;

    if(guestHost==pile) cout<<"YES";
    else cout<<"NO";
}