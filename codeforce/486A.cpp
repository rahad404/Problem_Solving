#include <iostream>
using namespace std;

long long int calc(long long int n){
    if(n%2==0)return n/2;
    else return ((n-1)/2)-n;
}

long long int calc2(long long int n){
    if(n==0)return 0;
    else if(n%2==0) return calc2(n-1)+n;
    else return calc2(n-1)-n;
}

int main(){
    long long int n;
    cin >> n;

    // long long int c = calc(n);
    long long int c = calc2(n);

    cout << c <<endl;
}
