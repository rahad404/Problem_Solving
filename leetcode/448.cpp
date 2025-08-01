#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    set<int> dist;
    for(int i : nums){
        dist.insert(i);
    }

    vector<int> dist_value;
    for(auto i=1;i<=nums.size();i++){
        auto find = dist.find(i);
        if(find == dist.end()){
            dist_value.push_back(i);
        }
    }
    return dist_value;
    }
};