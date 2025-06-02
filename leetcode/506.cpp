#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score){
    int n = score.size();
    vector<int> cpy(n);
    for(int i=0;i<n;i++){
        cpy[i]=score[i];
    }

    sort(cpy.rbegin(),cpy.rend());

    unordered_map<int, string> rank;
    for(int i=0; i<n;i++){
        if(i==0)rank[cpy[i]]="Gold Medal";
        else if(i==1)rank[cpy[i]]="Silver Medal";
        else if(i==2)rank[cpy[i]]="Bronze Medal";
        else rank[cpy[i]]=to_string(i+1);
    }

    vector<string> final(n);
    for(int i=0;i<n;i++){
        final[i]= rank[score[i]];
    }

    return final;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    findRelativeRanks(arr);
}
