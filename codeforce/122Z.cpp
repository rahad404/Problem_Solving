
#include <iostream>
using namespace std;

int main(){
    int num,f=1;
    cin >> num;
    int n = num;

    while(num>0){
        int digit= num%10;
        if(digit%10!=4 && digit%10!=7){
            f=0;
        }
        num = num/10;
    }

    if(f){
        cout<<"YES";
    }
    else{
        if(n%4==0||n%7==0||n%44==0||n%47==0||n%77==0||n%74==0||n%444==0||n%447==0||n%474==0||n%477==0)cout<<"YES";
        else cout<<"NO";
    }
}
