#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((ar[i]%k + ar[j]%k)%k == 0){
                ans++;
            }
        }
    }
    
    return ans;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
