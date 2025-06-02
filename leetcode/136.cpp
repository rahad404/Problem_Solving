#include <iostream>
// #include <set>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        // cout<<arr[i]<<" "<<c<<endl;
        if(c==1){
            cout<<arr[i];
            break;
        }
        c=0;
    }

    return 0;
}
