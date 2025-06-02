#include <iostream>
#include <set>
// #include <string>
using namespace std;

int main(){
    set<char> uniq;
    int n;
    cin >>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>> s[i];
        if(s[i]>'Z')s[i]-=('a'-'A');
        uniq.insert(s[i]);
    }

    int c=0;
    for(auto itr=uniq.begin();itr!=uniq.end();itr++){
        c++;
    }

    (c==26)?cout<< "YES":cout<< "NO";
}
