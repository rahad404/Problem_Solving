#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> cat = {'c', 'a', 't'};
    set<char> word;
    string s ; cin >> s;
    for(char x:s) word.insert(x);
    cout << (word==cat?"Yes":"No");
    
    return 0;
}