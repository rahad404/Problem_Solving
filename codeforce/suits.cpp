#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,t1=0,t2=0;
    cin>>a>>b>>c>>d>>e>>f;

    if(e>f){
        if(a>d){
            t1=d;
            d=0;
        }
        else{
            t1=a;
            d-=a;
        }

        int min=0;
        if(d<c && d<b){min=d;}
        else if(c<b){min=c;}
        else{min=b;}
        t2 = min;
    }
    else if(f>e){
        int min=0;
        if(d<c && d<b){min=d;}
        else if(c<b){min=c;}
        else{min=b;}
        t2 = min;
        d-=min;
        // cout<< min <<" "<<d<<endl;

        if(a>d){
            t1=d;
            d=0;
        }
        else{
            t1=a;
            d-=a;
        }
    }
    else if(e==f){
        int m1,m2;
        if(d<a){
            m1=d;
            // d=0;
        }
        int min=0;
        if(d<c && d<b){min=d;}
        else if(c<b){min=c;}
        else{min=b;}
        m2 = min;
        // d-=min;

        if(m1>m2){
            t1=m1;
        }
        else{
            t2=m2;
        }
    }

    cout<<t1*e+t2*f<<endl;
}
