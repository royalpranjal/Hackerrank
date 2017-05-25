#include <bits/stdc++.h>

using namespace std;

int minSteps(int n, string B){
    // Complete this function
    int i = 0, ans = 0;
    
    while((i+2) < n){
        if(B[i] == '0' && B[i+1] == '1' && B[i+2] == '0'){
            ans++;
            B[i+2] = '1';
        }
        i++;
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    string B;
    cin >> B;
    int result = minSteps(n, B);
    cout << result << endl;
    return 0;
}
