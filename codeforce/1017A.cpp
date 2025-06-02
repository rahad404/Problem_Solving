#include <iostream>
#include <utility>
using namespace std;

struct sub{
    int a,b,c,d;
    int r,id;
};

int main(){
    int n;
    cin>>n;
    struct sub s1[n];

    for(int i=0;i<n;i++){
        cin >>s1[i].a >>s1[i].b >>s1[i].c >>s1[i].d;
        s1[i].r = s1[i].a+s1[i].b+s1[i].c+s1[i].d;
    }
    int tomas_result=s1[0].r;

    for(int i=0;i<n;i++){
        int flag =0;
        for(int j=0;j<n-1-i;j++){
            if(s1[j].r<s1[j+1].r){
                swap(s1[j].r , s1[j+1].r);
                flag =1;
            }
        }
        if(flag==0)break;
    }

    for(int i=0;i<n;i++){
        if(s1[i].r==tomas_result){
            cout<<i+1;
            break;
        }
    }
}
