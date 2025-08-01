#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >>n >>k >>l >>c >>d >>p >>nl >>np;

    int drink = k*l;
    int lime_toast  = c*d;
    int drink_toast = drink/nl;
    int salt_toast = p/np;
    int toast = min({lime_toast, drink_toast, salt_toast})/n;
    cout<< toast;

    return 0;
}