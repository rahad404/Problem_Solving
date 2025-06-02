#include<stdio.h>

int main(){
    int n,a,b,c,i;
    scanf("%d",&n);
    int r = 0;
    for (i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a+b==2)||(b+c==2)||(c+a==2)){
            r=r+1;
        }
    }
    printf("%d",r);
}