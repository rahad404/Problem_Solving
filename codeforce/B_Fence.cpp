#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >>n >>k;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin >>v[i];

    int sum=0;
    for(int i=0;i<k;i++){
        sum+=v[i];
    }

    int min_sum=sum, min_index=0;
    for(int i=k;i<n;i++){
        sum-=v[i-k];
        sum+=v[i];
        if(sum<min_sum){
            min_sum=sum;
            min_index=i-k+1;
        }
    }
    cout<<min_index+1<<endl;

    

    return 0;
}