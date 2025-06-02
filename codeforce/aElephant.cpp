#include <iostream>
using namespace std;

int main(){
    int d;
    cin >> d;

    int i=0;
    while (d!=0) {
        if(5<=d){
            d-=5;
            i++;
        }
        else if(4<=d){
            d-=4;
            i++;
        }
        else if(3<=d){
            d-=3;
            i++;
        }
        else if(2<=d){
            d-=2;
            i++;
        }
        else if(1<=d){
            d-=1;
            i++;
        }
    }
    cout << i <<endl;
}
