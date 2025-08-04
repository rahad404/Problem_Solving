#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int num; cin>>num;
        int n=2,x;
        while(1){
            int y = pow(2,n)-1;
            if(num%y==0){
                x=num/y;
                break;
            }
            n++;
        }
        cout<<x<<endl;
    }

    return 0;
}