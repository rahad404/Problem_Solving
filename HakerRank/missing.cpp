#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    if(N<=0){
        while (N!=2) {
            cout << N << ' ';
            N++;
        }
        cout << endl;
    }
    else{
        int x=1;
        while (x!=N+1) {
            cout << x<< ' ';
            x++;
        }
        cout << endl;
    }

    return 0;
}
