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
    long long int t, start = 3, currt = 3, last = 0, ans = 3;
    cin >> t;
    
    while(currt < t){
        last = currt;
        currt = currt + (ans*2);
        ans = ans*2;
    }
    
    if(last){
        ans = ans + (last - t + 1);
    }
    else{
        ans = currt + 1 - t;
    }

    cout << ans << endl;
    
    return 0;
}
