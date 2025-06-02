#include <iostream>
using namespace std;

int main(){
    int n,cnt=0,half;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        cnt+=arr[i];
    }
    half = cnt/2;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    int sum=0,c=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        c++;
        if(sum>half){
            cout<<c;
            break;
        }
    }
}
