
#include<iostream>
using namespace std;

int main(){
    string s, t="hello";
    int i=0;
    cin >> s;

    for(char c : s){
        if(c==t[i]){
            i++;
        }
        if(i==t.length()){
            break;
        }
    }

    if(i==t.length())cout<<"YES";
    else cout<<"NO";

    return 0;
}
