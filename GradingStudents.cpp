#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    vector<int> ans;
    
    for(int i = 0; i < grades.size(); i++){
        int temp = grades[i];
        if(grades[i] >= 38){
            if(grades[i]%5 >= 3){
                temp += 5 - grades[i]%5;
            }
        }
        ans.push_back(temp);
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
