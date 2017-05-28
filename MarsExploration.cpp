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
    string S;
    cin >> S;
    
    int ans = 0, n = S.size();
    
    for(int i = 0; i < n; i = i + 3){
        if(S[i] != 'S'){
            ans++;
        }
        if(S[i+1] != 'O'){
            ans++;
        }
        if(S[i+2] != 'S'){
            ans++;
        }
    }
    
    cout << ans;
    
    return 0;
}
