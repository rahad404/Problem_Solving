#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n], q[n], s[n];
    for(int i=0;i<n;i++){
        cin>>p[i] >>q[i];
        s[i]=q[i]-p[i];
    }
    int room=0;
    for(int i=0;i<n;i++){
        if(s[i]>=2){
            room++;
        }
    }
    cout<<room;
}
