#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n >>k;
    int time = 240-k;
    int c = 0;
    for(int i=1;i<=n;i++){
        if(5*i<=time){
            time-=5*i;
            c++;
        }
    }
    cout<<c <<endl;
}