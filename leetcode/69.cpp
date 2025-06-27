#include<iostream>
using namespace std;

int mySqrt(int x){
    if(x<2)return x;
    int left = 1;
    int right = x/2;
    int sqrt;
    
    while (left<=right){
        int middle = left+(right-left)/2;
        if(middle*middle==x){
            return middle;
        }
        else if(middle*middle<x){
            sqrt=middle;
            left=middle+1;
        }
        else{
            right=middle-1;
        }
    }
    return sqrt;
}

int main(){
    cout<<mySqrt(8);
}