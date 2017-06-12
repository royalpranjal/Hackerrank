#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    map<int, int> m;
    
    for(int i = 0; i < n; i++){
        if(m.find(ar[i]) == m.end()){
            m[ar[i]] = 1;
        }
        else{
            m[ar[i]]++;
        }
    }
    
    map<int, int> :: iterator it = m.begin();
    
    int ans = 0;
    
    while(it != m.end()){
        ans += (it->second)/2;
        it++;
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
