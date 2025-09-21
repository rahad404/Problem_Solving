#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        long long c;
        cin >>n >>c;
        vector<long long> v(n);
        for(int i=0;i<n;i++) cin >>v[i];
        sort(v.begin(), v.end(), greater<int>());

        int m=1,coin=0;
        for(int i=0;i<n;i++){
            if(v[i]>c){
                coin++;
            }
            else if(m*v[i]<=c){
                m*=2;
            }
            else{
                coin++;
            }
        }
        
        cout<<coin<<endl;
    }

    return 0;
}