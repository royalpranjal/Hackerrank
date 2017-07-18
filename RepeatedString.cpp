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
    string s;
    cin >> s;
    long n;
    cin >> n;
    
    int len = s.size(), i = 0;
    long int ans = 0;
    
    if(n <= len){
        while(i < n){
            if(s[i] == 'a'){
                ans++;
            }
            i++;
        }
    }
    else{
        while(i < len){
            if(s[i] == 'a'){
                ans++;
            }
            i++;
        }
        
        ans = (n/len)*ans;
        
        i = 0;
        
        while(i < n%len){
            if(s[i] == 'a'){
                ans++;
            }
            i++;
        }
    } 
    
    cout << ans << endl;
    
    return 0;
}
