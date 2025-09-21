#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        long long a, b, n;
        cin >>a >>b >>n;

        vector<long long> v(n);
        for(int i=0;i<n;i++) cin >>v[i];
        sort(v.begin(), v.end());
        
        long long t=b;
        for(int i=0;i<n;i++){
            t += min(v[i], a-1);
        }
        cout<<t<<endl;

    }

    return 0;
}