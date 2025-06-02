#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5,7,9};
    int tergate = 9;
    int left=arr[0],right=(sizeof(arr)/sizeof(arr[0]))-1;

    while (left<=right) {
        int mid = (left+right)/2;
        if(arr[mid]==tergate){
            cout<<"terget "<<tergate<<" found at index "<<mid<<endl;
            break;
        }
        if(arr[mid]<tergate){
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
}
