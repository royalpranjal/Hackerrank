#include <bits/stdc++.h>

using namespace std;

int getSum(int num){
    int sum = 0;
    
    while(num){
        sum += num%10;
        num /= 10;
    }
    
    return sum;
}

string canConstruct(vector <int> a) {
    // Return "Yes" or "No" denoting whether you can construct the required number.
    int n = a.size(), sum = 0;
    
    for(int i = 0; i < n; i++){
        sum += getSum(a[i]);    
    }
    
    if(sum%3){
        return "No";
    }
    
    return "Yes";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = canConstruct(a);
        cout << result << endl;
    }
    return 0;
}
