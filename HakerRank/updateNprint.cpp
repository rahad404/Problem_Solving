#include<iostream>
using namespace std;

int main(){
    int n,x,v;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> x >> v;
    a[x] = v;
    for(int i=n-1; i>=0; i--){
        cout << a[i] << " ";
    }
}
