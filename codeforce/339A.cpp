#include <iostream>
using namespace std;
 
int main(){
    string str;
    cin >> str;
 
    if(str.length()==1){
        cout << str;
        return 0;
    }
    for(int i=0; i<str.length()-2; i+=2){
        if(str[i]>str[i+2]){
            char temp = str[i];
            str[i] = str[i+2];
            str[i+2] = temp;
            i=-2;
        }
    }
    cout << str;
 
    return 0;
}
