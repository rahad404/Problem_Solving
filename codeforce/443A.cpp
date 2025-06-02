#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<char> unique;
    for(char c:s){
        unique.insert(c);
    }
    
    int size = unique.size();
    if(size == 2)cout<<0;
    else if(size == 3)cout<<1;
    else cout<<size-4;

    return 0;
}