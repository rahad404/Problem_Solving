#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string odd="I hate ",even="I love ",between="that ",end="it";
    cin>>n;

    for(int i=1;i<=n;i++){
        i%2==0?cout<<even:cout<<odd;
        if(i<n)cout<<between;
    }
    cout<<end;
}
