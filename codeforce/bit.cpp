#include<iostream>
#include <string>
using namespace std;

int main(){
    int n,x=0;
    cin >> n;

    string bit;
    for(int i=0 ;i<n; i++){
        cin >> bit;
        if(bit == "++X" || bit == "X++"){
            x++;
        }
        else {
            x--;
        }
    }
    cout << x;
}
