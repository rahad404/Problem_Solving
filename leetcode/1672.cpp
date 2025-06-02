#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r,c;
    cout<<"enter r,c: ";
    cin >>r >>c;
    vector<vector<int>> wlt(r,vector<int> (c));

    for(int i=0;i<wlt.size();i++){
        for(int j=0;j<wlt[i].size();j++){
            cin>>wlt[i][j];
        }
    }

    vector<int> mwlt;
    for(int i=0;i<wlt.size();i++){
        int sum=0;
        for(int j=0;j<wlt[i].size();j++){
            sum+=wlt[i][j];
        }
        mwlt.push_back(sum);
    }

    int max=mwlt[0];
    for(int i: mwlt){
        if(i>max)max=i;
    }
    cout<<max<<endl;
}
