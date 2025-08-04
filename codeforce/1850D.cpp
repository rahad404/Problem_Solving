#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; 
        cin>>n >>k;
        
        vector<int> problem_before(n);
        for(int i=0;i<n;i++)cin>>problem_before[i];
        sort(problem_before.begin(), problem_before.end());

        int max=0,cnt=0;
        for(int i=0;i<n-1;i++){
            if((problem_before[i+1]-problem_before[i])<=k){
                cnt++;
            }
            else{
                if(cnt>max)max=cnt;

                cnt=0;
            }
        }
        if(cnt>max)max=cnt;

        int ans = n-(max+1);
        cout<<ans<<endl;
    }
    

    return 0;
}