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
    int N, count = 0;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
       cin >> B[B_i];
       if(B[B_i]%2){
           count++;
       }
    }
    
    if(count%2){
        cout << "NO" << endl;
        return 0;
    }
    
    int ans = 0, f = -1;
    
    for(int i = 0; i < N; i++){
        if(B[i]%2 != 0){
            if(f == -1){
                f = i;
            }
            else{
                ans += 2*(i-f);
                f = -1;
            }
        }
    }    
    
    cout << ans << endl;
    
    return 0;
}
