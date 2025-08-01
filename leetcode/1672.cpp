class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> mwlt;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            mwlt.push_back(sum);
        }

        int max=mwlt[0];
        for(int i: mwlt){
            if(i>max)max=i;
        }
        return max;   
    }
};