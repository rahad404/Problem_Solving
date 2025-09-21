#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >>s;
        vector<char> par;
        for(int i=0;i<n;i++){
            if(!par.empty() && par.back()=='(' && s[i]==')'){
                par.pop_back();
            }
            else{
                par.push_back(s[i]);
            }
        }
        cout <<par.size()/2 <<endl;
    }

    return 0;
}