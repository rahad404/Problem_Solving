#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >>t;

    map<string, int> name;
    while(t--){
        string s;
        cin >>s;
        if(name.count(s)>0){
            cout<<s<<name[s]<<endl;
            name[s]++;
        }
        else{
            cout<<"OK"<<endl;
            name[s]++;
        }

    }

    return 0;
}