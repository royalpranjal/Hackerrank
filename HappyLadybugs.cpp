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
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        
        map<char, int> m;
        
        bool space = false;
        
        for(int i = 0; i < n; i++){
            if(b[i] == '_'){
                space = true;
            }
            else{
                if(m.find(b[i]) == m.end()){
                    m[b[i]] = 1;
                }
                else{
                    m[b[i]]++;
                }
            }
        }
        
        map<char, int> :: iterator it = m.begin();
        
        string ans = "YES";
        
        while(it != m.end()){
            if(it->second == 1){
                ans = "NO";
                break;
            }
            it++;
        }
        
        if(!space){
            int i = 0;
            while(i < n){
                int count = 1, j = i+1;
                while(j < n && b[i] == b[j]){
                    count++;
                    j++;
                }
                if(count == 1){
                    ans = "NO";
                    break;
                }
                i = j;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
