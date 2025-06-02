#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int right=0, max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            right++;
            if(right>max)max=right;
        }
        else{
            right=0;
        }
    }
    cout<<max+1;
}