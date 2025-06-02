#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }
    int find=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i!=j) && mat[i][j]!=0){
                find++;
            }
            if ((i==j) && mat[i][j]!=1) {
                find++;
            }
        }
    }
    if(find!=0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
