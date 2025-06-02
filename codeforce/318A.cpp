#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;

    long long e=n/2,o;
    (n%2==0)?o=n/2:o=n/2+1;
    vector<long long> odd(o),even(e);

    long long od=0;
    for(long long i=0;i<o;i++){
        odd[i]=od+1;
        od+=2;
    }
    long long ev=0;
    for(long long i=0;i<e;i++){
        even[i]=ev+2;
        ev+=2;
    }

    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        if(i<o)arr[i]=odd[i];
        else arr[i]=even[i-o];
    }

    cout<<arr[k-1]<<endl;
    return 0;
}
