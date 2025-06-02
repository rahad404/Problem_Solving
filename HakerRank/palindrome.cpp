#include <iostream>
using namespace std;

int is_palindrome(string a){
    int n = a.size();
    for(int i=0; i<n; i++){
        if(a[i]!=a[n-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    string a;
    cin >> a;
    int ip = is_palindrome(a);
    if(ip){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
}
