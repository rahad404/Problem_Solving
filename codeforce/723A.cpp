#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> frnd(3);
    for(int i=0;i<3;i++)cin>>frnd[i];

    sort(frnd.begin(), frnd.end());

    cout<<(frnd[1]-frnd[0])+(frnd[2]-frnd[1]);

    return 0;
}