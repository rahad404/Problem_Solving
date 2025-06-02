#include<iostream>
using namespace std;

int main() {
    long long N;

    cin >> N;

    for(int i=1; i<=N; i++){
        if(i%3==0 && i%7==0){
            cout << i << endl;
        }
    }

    return 0;
}
