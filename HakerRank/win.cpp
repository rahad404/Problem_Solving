#include<iostream>
using namespace std;

int main(){
    int N;
    long long X1,X2;
    int c1=0,c2=0;

    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> X1 >> X2;
        if (X1>X2) {c1++;}
        else if (X1<X2) {c2++;}
    }
    if(c1>c2) {
        cout << "Tiger" << endl;
    }
    else if (c1<c2) {
        cout << "Pathan" << endl;
    }
    else {
        cout << "Draw" << endl;
    }

    return 0;
}
