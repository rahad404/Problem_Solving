class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
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
};