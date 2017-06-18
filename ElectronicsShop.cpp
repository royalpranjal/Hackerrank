#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());
    
    int i = 0, j = keyboards.size()-1, ans = -1;
    
    while(i < drives.size() && j >= 0){
        if(drives[i] + keyboards[j] <= s){
            ans = max(ans, drives[i] + keyboards[j]);
            i++;
        }
        else{
            j--;
        }
    }
    
    i = 0, j = drives.size()-1;
    
    while(i < keyboards.size() && j >= 0){
        if(drives[j] + keyboards[i] <= s){
            ans = max(ans, drives[j] + keyboards[i]);
            i++;
        }
        else{
            j--;
        }
    }
    
    return ans;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
