#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    bool space = false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
            if(space){
                cout<<" ";
                space=false;
            }
        }
        else{
            cout<<s[i];
            space = true;
        }
    }
}

