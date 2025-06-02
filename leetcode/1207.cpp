
#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;

bool uniqueOccurrences(vector<int>& arr){
    unordered_map<int, int> map;

    for(auto value : arr){
        map[value]++;
    }

    set<int> uniq;
    for(auto pair : map){
        uniq.insert(pair.second);
    }

    if(uniq.size()!=map.size())return false;
    return true;
}

int main(){
    vector<int> v = {1,1,2,2,3,3,3,4,4,4,4};
    cout<<uniqueOccurrences(v);
}
