#include<iostream>
using namespace std;

int main(){
    int t,n;

    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        int arr[n];

        int c1=0,c2=0;
        for(int j=0;j<n;j++){
            cin >> arr[j];
            arr[j]==1?c1++:c2++;
        }
        if(c1==0 && c2!=0){
            c2%2==0?cout<<"YES":cout<<"NO";
        }
        else if(c2==0 && c1!=0){
            c1%2==0?cout<<"YES":cout<<"NO";
        }
        else{
            c1%2==0?cout<<"YES":cout<<"NO";
        }cout<<endl;
    }

    return 0;
}
