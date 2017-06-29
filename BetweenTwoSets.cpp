#include <bits/stdc++.h>

using namespace std;

bool checkForA(vector<int>& a, int n){
    for(int i = 0; i < a.size(); i++){
        if(n%a[i] != 0){
            return false;
        }
    }
    
    return true;
}

bool checkForB(vector<int>& b, int n){
    for(int i = 0; i < b.size(); i++){
        if(b[i]%n != 0){
            return false;
        }
    }
    
    return true;
}

int getTotalX(vector < int > a, vector < int > b){
    // Complete this function
    int maxi = INT_MIN, n = a.size(), m = b.size();
    
    for(int i = 0; i < m; i++){
        maxi = max(b[i], maxi);
    }
    
    int lim = sqrt(maxi), ans = 0;
    
    for(int i = 1; i <= maxi; i++){
        if(checkForA(a, i)){
            if(checkForB(b, i)){
                ans++;
            }
        }
    }
    
    return ans;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
