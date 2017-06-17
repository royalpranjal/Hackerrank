#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count = 0, ans = 0;
    cin >> n;
    
    string s;
    cin >> s;
    
    bool valley = false;
    
    for(int i = 0; i < n; i++){
        if(s[i] == 'U'){
            count++;
        }
        else{
            count--;
        }
        
        if(count < 0){
            if(!valley){
                valley = true;
                ans++;
            }
        }
        else{
            if(valley){
                valley = false;
            }
        }
    }
        
    cout << ans;
    
    return 0;
}
