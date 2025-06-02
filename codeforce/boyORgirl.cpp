#include<iostream>
using namespace std;

int count_distinct(string s){
    int n = s.length();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(s[i]==s[j]){
                char temp = s[j];
                s[j] = s[n-1];
                s[n-1] = temp;

                s[n-1] = '\0';
                n--;
                j=i;
            }
        }
    }

    int i=0;
    while (s[i]!='\0') {
        i++;
    }
    return i;
}

int main(){
    string str;
    cin >> str;

    int distinct_len = count_distinct(str);

    if(distinct_len%2==0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
