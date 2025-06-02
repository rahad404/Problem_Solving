#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int n;
        cin >>n;
        vector<int> arr(n);
        vector<int> sum(n, 0);
        for(int i=0;i<n;i++){
            cin >>arr[i];
        }
        int s=0;
        for(int i=0;i<n;i++){
            s += arr[n-i-1];
            sum[i]=s;
        }
        for(int x:sum){
            cout<<x<<" ";
        }
    }
}