#include <iostream>
using namespace std;

int main(){
    char a='H',b='Q',c='9',d='+';
    string s;
    cin>>s;

    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==a||s[i]==b||s[i]==c){
            flag++;
            break;
        }
    }
    if(flag==0)cout<<"NO";
    else cout<<"YES";
}