#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector<int> arr(d);

    for(int i=k-1;i<d;i+=k){
        arr[i]=1;
    }
    for(int i=l-1;i<d;i+=l){
        arr[i]=1;
    }
    for(int i=m-1;i<d;i+=m){
        arr[i]=1;
    }
    for(int i=n-1;i<d;i+=n){
        arr[i]=1;
    }
    int count=0;
    for(int i=0;i<d;i++){
        if(arr[i])count++;
    }
    cout<<count;
}
