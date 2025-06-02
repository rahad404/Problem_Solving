#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int orenge=0,total=n*100;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        orenge+=arr[i];
    }
    cout<<((double)orenge/total)*100;
}
