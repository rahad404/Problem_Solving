#include <iostream>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;

    long long o;
    n%2==0?o=n/2:o=n/2+1;

    if(k<=o)cout<<2*k-1;
    else cout<<2*(k-o);

    return 0;
}
