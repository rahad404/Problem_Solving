#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    map<int,int> group;
    for(int i=0;i<n;i++){
        int x; cin >>x;
        group[x]++;
    }
    
    int car=0;
    while(group[4]!=0){
        group[4]--;
        car++;
    }
    while(group[3]!=0){
        if(group[1]!=0)group[1]--;
        group[3]--;
        car++;
    }
    while(group[2]!=0){
        if(group[2]>1){
            group[2]-=2;
        }
        else if(group[1]>1){
            group[2]--;
            group[1]-=2;
        }
        else if(group[1]=1){
            group[2]--;
            group[1]--;
        }
        else{
            group[2]--;
        }
        car++;
    }
    while(group[1]!=0){
        if(group[1]>3){
            group[1]-=4;
        }
        else{
            group[1]-=group[1];
        }
        car++;
    }    
    cout<< car <<endl;



    return 0;
}