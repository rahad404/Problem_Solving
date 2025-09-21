#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int a1,b1, a2,b2;
        cin >>a1 >>b1 >>a2 >>b2;

        int x = 5*a1 + b1 ;
        int y = 5*a2 + b2 ;

        if(y > x)cout << "No" <<endl;
        else if((y-x)%6!=0)cout << "No" <<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}


//         while(a1>=1 && b1>=1){
//             if(a1==a2 && b1==b2){
//                 cout<<"Yes"<<endl;
//                 break;
//             }
//             a1--; b1--;
//         }
//         if(a1==a2 && b1==b2)continue;

//         while(a1<a2 && b1>b2){
//             if(a1==a2 && b1==b2){
//                 cout<<"Yes"<<endl;
//                 break;
//             }
//             a1++; b1-=5;
//         }
//         if(a1==a2 && b1==b2)continue;

//         while(a1>a2 && b1<b2){
//             if(a1==a2 && b1==b2){
//                 cout<<"Yes"<<endl;
//                 break;
//             }
//             a1--; b1+=5;
//         }
//         if(a1==a2 && b1==b2)continue;

//         cout <<"No" <<endl;