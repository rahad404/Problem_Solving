#include<iostream>
using namespace std;

// function to conver string to uppercase
string to_upper(string a){
    int i=0;
    while(a[i]!='\0'){
        if(a[i]>='a' && a[i]<='z'){
            a[i]-=32;
        }
        i++;
    }
    return a;
}

// function to compare two string
int string_cmp(string a, string b){
    int i=0;
    while (a[i]!='\0' && b[i]!='\0') {
        if(a[i]>b[i]){
            return 1;
        }
        else if (a[i]<b[i]) {
            return -1;
        }
        i++;
    }
    return 0;
}

// main function
int main(){
    string a,b;
    cin >> a >> b;

    string upper_a = to_upper(a);
    string upper_b = to_upper(b);
    int r = string_cmp(upper_a, upper_b);

    cout << r << endl;
}
