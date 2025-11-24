#include<bits/stdc++.h>
using namespace std;

//a+b , a+c , b+c and a+b+c 
int main(){
    vector<long long int> x(4);
    cin >>x[0] >>x[1] >>x[2] >>x[3];
    sort(x.begin(), x.end());

    cout <<x[3]-x[0] <<" " <<x[3]-x[1] <<" " <<x[3]-x[2] <<endl;

    return 0;
}