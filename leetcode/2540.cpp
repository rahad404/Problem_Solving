#include <iostream>
#include <vector>
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] == nums2[j]) return nums1[i];
        else if(nums1[i] < nums2[j]) i++;
        else j++;
    }
    return -1;
}

// int getCommon(vector<int> nums1, vector<int> nums2) {

//     if(nums1[1]==nums2[1])return nums1[1];

//     if(nums1[1]>nums2[1]){
//         for(int i=0;i<nums1.size();i++){
//             int lb2=0,ub2=nums2.size();
//             while (lb2<=ub2) {
//                 int mid2=lb2+(ub2-lb2)/2;
//                 if(nums2[mid2]==nums1[i]){
//                     return nums1[i];
//                 }
//                 else if(nums2[mid2]<nums1[i]) {
//                     lb2 = mid2+1;
//                 }
//                 else {
//                     ub2 = mid2-1;
//                 }
//                 mid2=lb2+(ub2-lb2)/2;
//             }
//         }
//     }
//     else {
//         for(int i=0;i<nums2.size();i++){
//             int lb1=0,ub1=nums1.size();
//             while (lb1<=ub1) {
//                 int mid1=lb1+(ub1-lb1)/2;
//                 if(nums1[mid1]==nums2[i]){
//                     return nums1[i];
//                 }
//                 else if(nums1[mid1]<nums2[i]) {
//                     lb1 = mid1+1;
//                 }
//                 else {
//                     ub1 = mid1-1;
//                 }
//                 mid1=lb1+(ub1-lb1)/2;
//             }
    
//         }
//     } 
//     return -1;
// }

int main(){
    int n,m;

    cout<<"n:";
    cin>>n;
    vector<int> nums1(n);
    for(int i=0;i<n;i++){ cin>>nums1[i]; }

    cout<<"m:";
    cin>>m;
    vector<int> nums2(m);
    for(int i=0;i<m;i++){ cin>>nums2[i]; }

    cout<<getCommon(nums1, nums2);
}
