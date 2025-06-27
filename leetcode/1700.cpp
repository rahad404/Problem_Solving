#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int countStudents(vector<int>& students, vector<int>& sandwiches){
    queue<int> q;
    for(auto x:students)q.push(x);
    stack<int> s;
    for(int i=sandwiches.size()-1;i>=0;i--)s.push(sandwiches[i]);

    int check = 0;
    while(!s.empty()){
        if(q.front()==s.top()){
            q.pop();
            s.pop();
            check = 0;
        }
        else{
            int temp=q.front();
            q.pop();
            q.push(temp);
            check++;
            if(check==s.size()) break;
        }
    }
    int count=0;
    while (!q.empty()){
        count++;
        q.pop();
    }
    return count;
}


int main(){
    vector<int> student = {1,1,1,0,0,1};
    vector<int> sandwich = {1,0,0,0,1,1};
    
    cout<<countStudents(student,sandwich);

}