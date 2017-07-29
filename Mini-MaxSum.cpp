#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    
    int mini = INT_MAX, maxi = INT_MIN;
    long int sum = 0;
    
    for(int i = 0; i < 5; i++){
        sum += arr[i];
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    
    cout << sum - maxi << " " << sum - mini << endl;
    
    return 0;
}
