#include<iostream>
using namespace std;

int main(){
    int  n,check=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1)check=1;
    }

    if(check) cout<<"HARD";
    else cout<<"EASY";

    return 0;
}
