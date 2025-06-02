#include<iostream>
using namespace std;

int count_year(int a, int b){
    int count=0;
    while (1) {
        a *= 3;
        b *= 2;
        count++;
        if(a>b){
            return count;
        }
    }
    return 0;
}

int main(){
    int a, b;
    cin >> a >> b;

    int y = count_year(a,b);
    cout << y << endl;

    return 0;
}
