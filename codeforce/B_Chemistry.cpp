#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >>n >>k;
        string str;
        cin >>str;
        map<char,int> char_count;
        for(int i=0;i<n;i++){
            char_count[str[i]]++;
        }
        int odd=0;
        for(auto& pair:char_count){
            if(pair.second%2!=0)odd++;
        }
        
        if(odd>=k){
            odd-=k;
            if(odd>1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}