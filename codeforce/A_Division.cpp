// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        long long int x;
        cin>>x;
        
        if(1900<=x)cout<<"Division 1" <<endl;
        else if(1600<=x && x<=1899) cout<<"Division 2" <<endl;
        else if(1400<=x && x<=1599) cout<<"Division 3" <<endl;
        else if(1399>=x) cout<<"Division 4" <<endl;
    }

    return 0;
}