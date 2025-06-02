#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    for(int i=0;i<y;i++){
        char a,b;
        cin >>a>>b;
        for(int j=0;j<x;j++){
            if(s[j]==a)s[j]=b;
            else if(s[j]==b)s[j]=a;
        }
    }
    cout<<s;
}
