#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> missingNum(vector<int>* nums){
    set<int> dist;
    for(int i : *nums){
        dist.insert(i);
    }

    vector<int> dist_value;
    for(auto i=1;i<=nums->size();i++){
        auto find = dist.find(i);
        if(find == dist.end()){
            dist_value.push_back(i);
        }
    }
    return dist_value;
}

int main(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> mv = missingNum(&arr);

    for(int i : mv){
        cout << i;
    }

    return 0;
}
