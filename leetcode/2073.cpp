#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k){
    int p = tickets[k];

    queue<int> q;
    for(auto x:tickets)q.push(x);

    int t=0, s=q.size();
    for(int i=0;i<s;i++){
        if(i>k){
            if(q.front()<p){
                t+=q.front();
                q.pop();
            }
            else{
                t+=p-1;
                q.pop();
            }
        }
        else{
            if(q.front()<=p){
                t+=q.front();
                q.pop();
            }
            else{
                t+=p;
                q.pop();
            }
        }
        cout<<"iter"<<t<<endl;
    }
    return t;
}

int main(){
    vector<int> v = {2,3,2};
    cout<<timeRequiredToBuy(v,2);
}
