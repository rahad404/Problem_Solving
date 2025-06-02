#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num, sumEven=0, sumOdd=0;
    for(int i=1; i<=N; i++){
        cin >> num;

        if(num%2==0){
            sumEven += num;
        }
        else{
            sumOdd += num;
        }
    }

    cout << sumEven << ' ' << sumOdd << endl;

    return 0;
}
