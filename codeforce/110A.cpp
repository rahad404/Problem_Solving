#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    string s = to_string(n);

    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='4' || s[i]=='7') count++;
    }

    if(count==7 || count==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
