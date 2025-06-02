
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        string s = count==3?"YES":"NO";
        cout << s << endl;
    }
}
