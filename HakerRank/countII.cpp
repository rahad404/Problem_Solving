#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int v=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            v++;
        }
    }
    cout << v << endl;
}
