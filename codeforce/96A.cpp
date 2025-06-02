#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int max=0,c=1;
    for(int i=0; i<str.size()-1; i++){
        if(str[i]==str[i+1]){
            c++;
            if(c>max)max=c;
        }
        else{
            c=1;
        }
    }
    if(max>=7){cout << "YES" <<endl;}
    else{cout << "NO" << endl;}
}
