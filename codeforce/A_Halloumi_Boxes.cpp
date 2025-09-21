#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> nums){
    int s = nums.size();
    
    if(s==1) return 1;

    if(s==2){
        if(nums[0]>nums[1]) return 0;
        else return 1;
    }

    for(int i=0;i<s-1;i++){
        if(nums[i]>nums[i+1])return 0;
    }

    return 1;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        int n, k;
        cin >>n >>k;

        vector<int> nums(n);
        for(int i=0;i<n;i++) cin >>nums[i];
        
        if(is_sorted(nums)){
            cout<<"YES"<<endl;
        }
        else{
            if(k==1){
                cout<<"NO"<<endl;
            }
            else if(k>1){
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}