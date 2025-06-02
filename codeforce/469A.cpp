#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> clvl;
    int lvl,n1,n2;

    cin >> lvl >> n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        clvl.insert(arr1[i]);
    }

    cin>> n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        clvl.insert(arr2[i]);
    }

    int sum=0;
    for(auto i=clvl.begin(); i!=clvl.end();i++){
        sum += *i;
    }

    if(sum==(lvl*(lvl+1))/2){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
}
