#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int number, count=0;
        cin>>number;
    
        vector<int> roundNumbers;
    
        int m = 1;
        while (number!=0){
            int n = number%10;
            n*=m;
            if(n!=0){
                roundNumbers.push_back(n);
                count++;
            }
            number/=10;
            m*=10;
        }
        
        cout<<count<<endl;
        for(int x:roundNumbers)cout<<x<<" ";
        cout<<endl;
    }   
}