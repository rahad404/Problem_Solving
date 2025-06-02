#include<iostream>
using namespace std;

int main(){
    int cl=0,sl=0,s=0;
    string str;
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z')cl++;
        else if(str[i]>='a' && str[i]<='z')sl++;
        else if(str[i]==' ')s++;
    }
    cout << "Capital - " << cl << endl;
    cout << "Small - " << sl << endl;
    cout << "Space - " << s << endl;
}
