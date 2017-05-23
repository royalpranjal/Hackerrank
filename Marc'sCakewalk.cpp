#include <bits/stdc++.h>

using namespace std;

bool comp(int& a, int& b){
    if(a > b){
        return true;
    }
    
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    // your code goes here
    
    sort(calories.begin(), calories.end(), comp);
    
    long int ans = 0;
    
    for(int i = 0; i < n; i++){
        ans = ans + pow(2, i)*calories[i];
    }
    
    cout << ans;
    
    return 0;
}
