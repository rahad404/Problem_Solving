#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i = -1;
        }
    }

    if(n%2==0){
        cout << arr[(n/2)-1] << " " << arr[((n/2)+1)-1] << endl;
    }
    else {
        cout << arr[((n+1)/2)-1] << endl;
    }
}
