#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> numbers, int target);

vector<int> twoSum(vector<int> numbers, int target) {
    int l=0, r=(numbers.size()-1), mid;
    if(numbers[l]+numbers[r] == target){
        return {l+1, r+1};
    }
    while (l<r)
    {
        mid = (l+r)/2;
        if(numbers[mid]+numbers[mid+1] == target){
            return {mid+1, mid+1+1};}
        else if(numbers[mid]+numbers[mid-1] == target){
            return {mid, mid+1};}
        else{
            if(numbers[mid]+numbers[mid+1] > target){
                r = mid-1;}
            else if(numbers[mid]+numbers[mid+1] < target){
                l = mid+1;}
        }
    }
    return {};
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"terget: ";
    int t; cin>>t;
    vector<int> ans = twoSum(v, t);
    for(int x:ans)cout<<x<<" ";

}