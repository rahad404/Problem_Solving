#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >>n >>m;

    bool f=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int i=0;i<m;i++) cout<<"#";
        }
        else{
            if(!f){
                for(int i=0;i<m-1;i++)cout<<".";
                cout<<"#";
                f=1;
            }
            else{
                cout<<"#";
                for(int i=0;i<m-1;i++)cout<<".";
                f=0;
            }
        }
        cout<<endl;
    }

    return 0;
}