#include<stdio.h>
#include<string.h>

int main(){
    char w[100];
    int i,test,length;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%s",w);
        length = strlen(w);

        if(length>10){
            printf("%c%d%c\n",w[0],length-2,w[length-1]);
        }
        else
        {
            puts(w);
        }        
    }
}
