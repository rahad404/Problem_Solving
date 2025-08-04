#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >>t;
    for(int i=0;i<t;i++){
        int num; cin >>num;
        
        int count_three = 0;
        while(num>0 && num%3==0){
            count_three++;
            num/=3;
        }

        int count_two = 0;
        while(num>0 && num%2==0){
            count_two++;
            num/=2;
        }

        int cnt=0;
        if(num>1 || count_two>count_three){
            cout<<-1<<endl;
        }
        else{
            cnt+= (count_three-count_two);
            cnt+= count_three;
            cout<< cnt<<endl;
        } 
        
    }

    return 0;
}