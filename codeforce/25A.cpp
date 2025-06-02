#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int eCount=0,oCount=0,eIndex=0,oIndex=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            eCount++;
            eIndex=i;
        }
        else {
            oCount++;
            oIndex=i;
        }
    }

    if(eCount==1){
        cout<<eIndex+1;
    }
    else if (oCount==1){
        cout<<oIndex+1;
    }
}
