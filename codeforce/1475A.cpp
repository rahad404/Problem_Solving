#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        long long num;
        cin >>num;
        if(num == 1 || (num & (num - 1)) == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}