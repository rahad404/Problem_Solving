#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++) {cin>>arr[i];}

    int max=arr[0], min=arr[0], maxIndex=0, minIndex=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            maxIndex = i;
        }
        if(arr[i]<=min){
            min = arr[i];
            minIndex = i;
        }
    }

    int sec=0;
    if(maxIndex>minIndex)sec = maxIndex+(n-2-minIndex);
    else sec = maxIndex+(n-1-minIndex);

    cout<<sec;

    return 0;
}
