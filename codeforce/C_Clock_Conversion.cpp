#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >>s;
        int x,y,h;
        x = s[0]-'0';
        y = s[1]-'0';
        h = x*10 + y;

        string new_h;
        if(h == 12){
            cout<<s <<" PM" <<endl;
        }
        else if(h == 0){
            s[0]='1'; s[1]='2';
            cout<<s <<" AM" <<endl;
        }
        else if(h > 12){
            h-=12;
            if(h<10){
                new_h = to_string(h);
                s[0]='0'; s[1]=new_h[0]; 
            }
            else{
                new_h = to_string(h);
                s[0]=new_h[0]; s[1]=new_h[1];
            }
            cout<<s <<" PM" <<endl;
        }
        else{
            cout<<s <<" AM" <<endl;
        }

    }

    return 0;
}