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

int count(string s){
    int ans = 1;
    
    if(s.size() == 0){
        return 0;
    }
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] <= 90 && s[i] >= 65){
            ans++;
        }
    }
    
    return ans;
}

int main(){
    string s;
    cin >> s;
    
    cout << count(s) << endl;
    
    return 0;
}
