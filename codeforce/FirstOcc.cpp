#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,5,5,7,9};
    int tergate = 5;
    int left=0,right=(sizeof(arr)/sizeof(arr[0]))-1;
    int firstOcc=-1;

    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]==tergate){
            firstOcc=mid;
            right = mid-1;
        }
        else if(arr[mid]<tergate){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<"First occurrence of "<<tergate<<" found at index "<<firstOcc<<endl;
}
