#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n>0){
        cout<<n;
    }
    else{
        int x,y,d;
        x=n/10;
        d=n%10;
        y=(x/10)*10+d;
        if(x>y)cout<<x<<endl;
        else cout<<y<<endl;
    }
    
    return 0;
}