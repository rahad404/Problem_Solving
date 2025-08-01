#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    queue<int> q;

    for(int i=0;i<n;i++){
        int c;
        cin >>c;
        q.push(c);
    }

    int crime=0,police=0;
    for(int i=0;i<n;i++){
        int x = q.front();
        q.pop();
        if(x>0){
            police+=x;
        }
        else if(police>0 && x==-1){
            police--;
        }
        else{
            crime++;
        }
    }
    cout<<crime<<endl;
}