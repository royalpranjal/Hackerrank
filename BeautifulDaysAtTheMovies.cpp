#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int reverse(int n){
    long int ans = 0;
    
    while(n){
        ans = ans*10 + n%10;
        n = n/10;
    }
    
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int l, r, k, ans = 0;
    cin >> l >> r >> k;
    
    for(int i = l; i <= r; i++){
        long int rev = reverse(i);
        if(((long int)i - rev)%k == 0){
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
