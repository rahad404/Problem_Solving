#include<stdio.h>

int main(){
    int m,n,a;
    long long int x,y;
    scanf("%d %d %d",&m,&n,&a);
    if (m%a==0){
        x=m/a;
    }
    else{
        x=m/a+1ll;
    }
    if (n%a==0){
        y=n/a;
    }
    else{
        y=n/a+1ll;
    }
    printf("%lld",x*y);
}