#include<iostream>
#include<vector>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    vector<int> stk;
    while(!prices.empty()){
        stk.push_back(prices.back());
        prices.pop_back();
    }
    
    while(!stk.empty()){
        int temp = stk.back();
        stk.pop_back();
        if(stk.back()<=temp)prices.push_back(temp-stk.back());
        else prices.push_back(temp);
    }
    return prices;
}

int main(){
    vector<int> price = {8, 4, 6, 2, 3};
    vector<int> f_price = finalPrices(price);
    
    for(int x:f_price)cout<<x<<" ";
}