#include<iostream>
using namespace std;

int main(){
    string str;

    cin >> str;

    int s=0,c=0;
    for(int i=0;i<str.size();i++) {
        if(str[i]>='a' && str[i]<='z'){
            s++;
        }
        if(str[i]>='A' && str[i]<='Z'){
            c++;
        }
    }
    cout << c <<" "<< s;
}
