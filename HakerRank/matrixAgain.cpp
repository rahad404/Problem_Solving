#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    int mtx[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> mtx[i][j];
        }
    }

    for(int j=0; j<c; j++){
        cout << mtx[r-1][j]<<" ";
    }
    cout << endl;
    for(int i=0; i<r; i++){
        cout << mtx[i][c-1]<<" ";
    }
}
