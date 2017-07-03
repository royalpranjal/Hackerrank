#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    vector<int> temp(6, 0);
    
    for(int i = 0; i < n; i++){
        temp[ar[i]]++;
    }
    
    int maxi = -1, count = -1, type = -1;
    
    for(int i = 1; i <= 5; i++){
        if(temp[i] > maxi){
            count = 1;
            maxi = temp[i];
            type = i;
        }
        else if(temp[i] == maxi){
            count++;
        }
    }
    
    return type;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
