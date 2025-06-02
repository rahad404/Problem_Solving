#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c=0;
        cin >>a >>b;
        while (a%b!=0) {
            a++;
            c++;
        }
        cout <<c <<endl;
    }
}
