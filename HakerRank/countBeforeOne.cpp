#include<iostream>
using namespace std;

int count_before_one(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            return count;
        }
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = count_before_one(arr,n);
    cout << count << endl;
}
