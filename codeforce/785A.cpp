#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<string> polyhydron(n);
    for(int i=0;i<n;i++){
        cin>>polyhydron[i];
    }

    map<string, int> m;
    m= {{"Tetrahedron", 4},
        {"Cube" , 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    long long int sum=0;
    for(int i=0;i<n;i++) {
        sum+=m[polyhydron[i]];
    }
    cout<<sum;

}