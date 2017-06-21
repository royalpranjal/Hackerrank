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
    vector<int> a(n);
    map<int, int> m;
    
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
        if(m.find(a[a_i]) == m.end()){
            m[a[a_i]] = 1;
        }
        else{
            m[a[a_i]]++;
        }
    }
    
    map<int, int> :: iterator it = m.begin();
    
    int ans = 0;
    
    while(it != m.end()){
        map<int, int> :: iterator itt = m.find(it->first + 1);
        if(itt != m.end()){
            ans = max(ans, it->second + itt->second);
        }
        ans = max(ans, it->second);
        it++;
    }
    
    cout << ans << endl;
    
    return 0;
}
