
#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    int i=0;
    while (true) {
        int sy = year+i+1;
        int w = sy%10;
        int x = (sy/10)%10;
        int y = (sy/100)%10;
        int z = sy/1000;

        if(w==x || w==y || w==z || x==y || x==z || y==z){}
        else {
            cout<<sy<<endl;
            break;
        }
        i++;
    }
}
