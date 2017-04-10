#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a, b;
    cin >> a >> b;
    
    vector<int> temp1(26, 0);
    vector<int> temp2(26, 0);
    
    for(int i = 0; i < a.size(); i++){
        temp1[a[i] - 'a']++;
    }
    
    for(int i = 0; i < b.size(); i++){
        temp2[b[i] - 'a']++;
    }
    
    int ans = 0;
    
    for(int i = 0; i < 26; i++){
        ans = ans + abs(temp1[i] - temp2[i]);
    }
    
    cout << ans << endl;
    
    return 0;
}
