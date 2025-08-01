#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    for(int i=0;i<t;i++){
        vector<int> digits(3);
        for(int i=0;i<3;i++)cin>>digits[i];
    
        sort(digits.begin(), digits.end());
    
        int sum=digits[0]+digits[1];
        
        if(sum==digits[2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}