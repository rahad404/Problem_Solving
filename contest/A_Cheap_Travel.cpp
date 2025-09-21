#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;
    cin >>n >>m >>a >>b;

    int x = n/b;
    int y = n%b;
    int price = 0;
    price += x*b;
    price += y*a;
    cout << price;

    return 0;
}