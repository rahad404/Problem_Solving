#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n, q;
        cin >>n >>q;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >>arr[i];
        for(int i=0;i<q;i++){
            long long l, r, k;
            cin >>l >>r >>k;

            long sum=0;

            for(int i=0;i<l-1;i++)sum+=arr[i];
            for(int i=r-1;i<arr.size();i++)sum+=arr[i];
            k*=(r-l)+1;
            if((sum%2!=0 && k%2==0) || (sum%2==0 && k%2!=0))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}