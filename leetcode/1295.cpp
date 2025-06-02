#include <iostream>
#include <vector>
using namespace std;

int findNumbers(vector<int>& nums) {
    int even=0;
    for(int i:nums){
        int count=0;
        while(i/10!=0){
            i/=10;
            count++;
        }
        if((count+1)%2==0)even++;
    }
    return even;
}

int main(){
    int n;
    cin >>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout <<findNumbers(nums);
}
