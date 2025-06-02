#include<iostream>
using namespace std;

int main(){
    int size,x;
    cin >> size >> x;
    string arr;
    cin >> arr;
    for(int i=0; i<x; i++){
        for(int j=0; j<size; j++){
            char t;
            if(arr[j]=='B' && arr[j+1]=='G' && j<size-1){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                j++;
            }
        }
    }
    cout << arr;

    return 0;
}
