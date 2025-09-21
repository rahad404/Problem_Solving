#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;

        vector<int> vase(n);
        for(int i=0; i<n; i++) cin >>vase[i];
    
        int min_cost = INT_MAX;
        if(n==2){
            min_cost = vase[0]+(vase[1]/2);
        }
        else{
            for(int i=0; i<n-1; i++){
                int cost = vase[i]+(vase[i+1]/2);
                if(cost<min_cost) min_cost = cost;
            }
        }

        sort(vase.begin(), vase.end());
        int cost = vase[0]+vase[1];
        if(cost<min_cost) min_cost = cost;

        cout <<min_cost <<endl;
    }

    return 0;
}