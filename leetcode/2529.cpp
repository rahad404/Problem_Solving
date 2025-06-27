#include<iostream>
#include<vector>
using namespace std;

int indexlowboud(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int maximumCount(vector<int>& nums) {
    int n = nums.size();
    int neg = indexlowboud(nums,0);
    int pos = nums.size()-indexlowboud(nums,1);
    return max(pos, neg);
}

int main(){
    vector<int> nums={-2,-1,-1,1,2,3};
    cout<<maximumCount(nums);
}