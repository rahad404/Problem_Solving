#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int upper=0,lower=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z')upper++;
        else if(str[i]>='a' && str[i]<='z')lower++;
    }
    if(upper>lower){
        for(int i=0; i<str.size(); i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i]-=32;
            }
        }
    }
    else{
        for(int i=0; i<str.size(); i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]+=32;
            }
        }
    }

    cout << str << endl;

}
