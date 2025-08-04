#include<bits/stdc++.h>
using namespace std;

int main(){
    string 
    s1="qwertyuiop",
    s2="asdfghjkl;",
    s3="zxcvbnm,./";

    map<char,char> l,r;

    for(int i=0;i<9;i++){
        l[s1[i]]=s1[i+1];
        l[s2[i]]=s2[i+1];
        l[s3[i]]=s3[i+1];
    }
    for(int i=1;i<10;i++){
        r[s1[i]]=s1[i-1];
        r[s2[i]]=s2[i-1];
        r[s3[i]]=s3[i-1];
    }

    char shift; cin>>shift;
    string str; cin>>str;

    if(shift=='R'){
        for(char x:str){
            cout<<r[x];
        }
    } 
    else if(shift=='L'){
        for(char x:str){
            cout<<l[x];
        }
    }
    cout<<endl;

    return 0;
}