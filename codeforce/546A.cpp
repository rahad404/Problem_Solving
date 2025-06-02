#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int ppb, amnt, nb;
    cin >> ppb >> amnt >> nb;

    int i=0,l;
    while(i!=nb){
        amnt -= (i+1)*ppb;
        i++;
    }
    if(amnt>=0){
        cout << 0 << endl;
    }
    else {
        cout << abs(amnt) << endl;
    }
}
