#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> nums){
    int left=0, right=nums.size()-1, mid=left+(right-left)/2;
    while(left<=right){
        if(mid>0 && nums[mid]<nums[mid-1]){
            right = mid-1;
        }
        else if(mid<nums.size()-1 && nums[mid]<nums[mid+1]){
            left = mid+1;
        }
        mid = left+(right-left)/2;
    }
    return -1;
}

int main(){
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }

    cout<< findPeakElement(v);

}
