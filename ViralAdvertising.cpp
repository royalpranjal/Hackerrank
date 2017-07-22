#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, ans = 0, last = 2;
    cin >> n;
    
    while(n){
        ans += last;
        last = (last*3)/2;
        n--;
    }
    
    cout << ans << endl;
    
    return 0;
}
