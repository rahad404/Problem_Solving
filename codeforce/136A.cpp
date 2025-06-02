#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int give[n],recive[n];
    for(int i=0;i<n;i++){
        cin>>give[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+1==give[j]){
                recive[i]=j+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<recive[i]<<" ";
    }
}
