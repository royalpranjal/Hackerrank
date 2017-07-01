#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int ans = 0, i = 0, sum = 0, start = 0;
    
    while(i < m){
        sum += s[i];
        i++;
    }
    
    if(sum == d){
        ans++;
    }
    
    while(i < n){
        sum += s[i];
        sum -= s[start];
        if(sum == d){
            ans++;
        }
        start++;
        i++;
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
