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
    vector<int> A(n);
    map<int, vector<int> > m;
    
    for(int i = 0;i < n;i++){
       cin >> A[i];
       m[A[i]].push_back(i);
    }
    
    int ans = 10000;
    
    map<int, vector<int> > :: iterator it = m.begin();
    
    while(it != m.end()){
        vector<int> temp = it->second;
        for(int i = 1; i < temp.size(); i++){
            ans = min(ans, temp[i]-temp[i-1]);
        }
        
        it++;
    }
    
    if(ans == 10000){
        ans = -1;
    }
    
    cout << ans << endl;
    
    return 0;
}
