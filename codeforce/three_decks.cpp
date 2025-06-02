#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int a,b,c,x,y;
        cin >>a >>b >>c;

        x = b-a;
        a += x;
        c -= x;
        if(a==b && b==c){
            cout <<"YES"<<endl;
        } 
        else if(c>b){
            y = c-b;
            if(y%3==0){
                cout <<"YES"<<endl;
            }
            else{
                cout <<"NO"<<endl;
            }
        }
        else{
            cout <<"NO"<<endl;
        }
    }

    return 0;
}