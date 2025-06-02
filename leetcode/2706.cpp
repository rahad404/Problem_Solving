#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int buyChoco(vector<int> price, int money){
    int n = price.size();
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(price[j]>price[j+1]){
                flag=1;
                swap(price[j],price[j+1]);
            }
        }
        if(!flag)break;
    }

    int p=price[0]+price[1];
    if(p<=money)return money-p;
    else return money;
}

int main(){
    int n; cin >>n;
    vector<int> price(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }

    int money;
    cin>>money;

    cout<<buyChoco(price,money);

}
