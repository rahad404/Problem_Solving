#include<iostream>
#include<vector>
using namespace std;

// '+'.
// Record a new score that is the sum of the previous two scores.
// 'D'.
// Record a new score that is the double of the previous score.
// 'C'.
// Invalidate the previous score, removing it from the record.

int calPoints(vector<string>& operations) {
    vector<int> stk;
    for(const string& op : operations){
        if(op=="+"){
            int last = stk.back(); 
            stk.pop_back();
            int new_score = last+stk.back();
            stk.push_back(last);
            stk.push_back(new_score);
        }
        else if(op=="D"){
            stk.push_back(stk.back()*2);
        }
        else if(op=="C"){
            stk.pop_back();
        }
        else{
            stk.push_back(stoi(op));
        }
    }
    int score = 0;
    while (!stk.empty()){
        score += stk.back();
        stk.pop_back();
    }
    return score;
}

int main(){
    vector<string> score = {"5","2","C","D","+"};
    int points = calPoints(score);
    cout<<points;
    
}