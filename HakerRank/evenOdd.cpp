#include <iostream>
using namespace std;

void odd_even(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int even=0,odd=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << even <<" "<< odd << endl;
}

int main(){
    odd_even();
}
