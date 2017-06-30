#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    vector<int> ans;
    
    int maxiCount = 0, miniCount = 0, n = s.size();
    int maxi = s[0], mini = s[0];
    
    for(int i = 1; i < n; i++){
        if(s[i] > maxi){
            maxiCount++;
            maxi = s[i];
        }
        else if(s[i] < mini){
            miniCount++;
            mini = s[i];
        }
    }
    
    ans.push_back(maxiCount);
    ans.push_back(miniCount);
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
