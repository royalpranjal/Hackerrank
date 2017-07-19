#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    vector<int> temp(n+1, INT_MAX);
    temp[0] = 0;
    temp[1] = 0;
    
    if(c[1] == 0){
        temp[2] = 1;
    }   
    
    for(int i = 3; i <= n; i++){
        if(c[i-1] == 0){
            int val = INT_MAX;
            if(c[i-2] == 0){
                val = min(val, temp[i-1]);
            }
            if(c[i-3] == 0){
                val = min(val, temp[i-2]);
            }
            temp[i] = 1 + val;
        }
    }
    
    cout << temp[n] << endl;
    
    return 0;
}
