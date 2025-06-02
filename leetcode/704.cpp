#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int lb=0,ub=nums.size()-1,mid = (lb+ub)/2;
    while (lb<=ub) {
        // int mid = (lb+ub)/2;
        if(nums[mid]==target){return mid;}
        else if (nums[mid]<target){lb=mid+1;}
        else {ub=mid-1;}
        mid=(lb+ub)/2;
    }
    return -1;
}

int main(){
    int n,t;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    cout<<"target? : ";
    cin>>t;
    cout<<search(nums,t);
}
