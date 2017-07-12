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
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        int temp = INT_MAX;
        for(int j = 0; j < m; j++){
            temp = min(temp, abs(c[j]-i));
        }
        ans = max(ans, temp);
    }
    
    cout << ans << endl;
    
    return 0;
}
