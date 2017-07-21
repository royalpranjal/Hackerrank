#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, maxi = 0;
    cin >> n;
    
    vector<int> temp(n);

    map<int, int> m;
    
    for(int i = 0; i < n; i++){
        cin >> temp[i];
        
        if(m.find(temp[i]) == m.end()){
            m[temp[i]] = 1;
        }
        else{
            m[temp[i]]++;
        }
        
        maxi = max(maxi, m[temp[i]]);
    }
    
    cout << n - maxi << endl;
    
    return 0;
}
