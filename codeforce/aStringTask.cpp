#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' &&
            str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y'){
                if(str[i]>='A' && str[i]<='Z'){
                    str[i]+=32;
                    cout<< '.' << str[i];
                }
                else{
                    cout<< '.' << str[i];
                }
            }
    }
}
