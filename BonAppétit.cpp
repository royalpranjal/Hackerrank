#include <bits/stdc++.h>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int sum = 0; 
    
    for(int i = 0; i < n; i++){
        sum += ar[i];
    }
    
    sum -= ar[k];
    
    if(sum/2 == b){
        return -1;
    }
    
    return b - sum/2;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if(result == -1){
        cout << "Bon Appetit" << endl;
    }
    else{
        cout << result << endl;        
    }

    return 0;
}
