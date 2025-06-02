#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b,c;
    cin >> a >> b;
    c.resize(a.length());

    for(int i=0;i<a.length();i++){
        a[i]==b[i]?c[i]='0':c[i]='1';
    }
    cout << c << endl;
}
