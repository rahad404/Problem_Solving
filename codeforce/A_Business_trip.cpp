#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >>k;
    vector<int> month(12);
    for(int i=0;i<12;i++) cin >>month[i];

    sort(month.begin(), month.end(), greater<>());
    
    int flower=0;
    int m=0;
    for(int x:month){
        if(flower==k || flower>k){
            break;
        }
        flower+=x;
        m++;
    }
    if(flower<k) cout<<-1 <<endl;
    else cout<<m <<endl;

    return 0;
}