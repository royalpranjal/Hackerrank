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
    
    while(test){
        int n, m, s, ans;
        cin >> n >> m >> s;
        
        ans = (m + s - 1)%n;
        
        if(ans == 0){
            ans = n;
        }
        
        cout << ans << endl;
        
        test--;
    }
    
        
    return 0;
}
