#include <iostream>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int> nums){
    int max = nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max)
            max=nums[i];
    }
    int fr[max];
    for(int i=0;i<nums.size();i++){
        fr[nums[i]]++;
        if(fr[nums[i]]>1)return 1;
    }
    return 0;
}

int main(){
    int n;
    cin>> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    cout<< containsDuplicate(arr);

}
