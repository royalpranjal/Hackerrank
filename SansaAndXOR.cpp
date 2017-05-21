#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test;
    cin >> test;
    
    while(test--){
        int n, ans = 0;
        cin >> n;
        
        vector<int> temp(n);
        
        for(int i = 0; i < n; i++){
            cin >> temp[i];
        }
        
        for(int i = 0; i < n; i++){
            if((i-0+1)*(n-i)%2){
                ans = ans ^ temp[i];
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
