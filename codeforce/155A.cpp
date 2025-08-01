#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> points(n);
    for(int i=0;i<n;i++){
        cin >>points[i];
    }

    int max = points[0];
    int min = points[0];
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(points[i]<min){
            min = points[i];
            cnt++;
        }
        else if(points[i]>max){
            max = points[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
}