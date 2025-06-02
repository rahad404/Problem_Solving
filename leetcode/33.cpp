#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> v, int target){
    int lb=0,ub=v.size()-1,mid=lb+(ub-lb)/2;
    while(lb<=ub){
        if(v[mid]==target){
            return mid;
        }
        if(v[lb]<=v[mid]){
            if(target>=v[lb] && target<v[mid]){
                ub = mid-1;
            }
            else{
                lb = mid+1;
            }
        }
        else {
            if(target>v[mid] && target<=v[ub]){
                lb = mid+1;
            }
            else {
                ub = mid-1;
            }
        }
        mid=lb+(ub-lb)/2;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<search(v,2);
}
