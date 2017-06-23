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
    vector<int> scores(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    // your code goes here
    vector<int> rank(n);
    
    rank[0] = 1;
    
    for(int i = 1; i < n; i++){
        rank[i] = rank[i-1];
        if(scores[i] != scores[i-1]){
            rank[i]++;
        }
    }
    
    int j = n-1, total = 0;
    
    for(int i = 0; i < m; i++){
        total = alice[i];
        int rnk = 1;
        if(j >= 0){
            while((j >= 0) && (total > scores[j])){
                j--;
            }
            if(j < 0){
                rnk = 1;
            }
            else if(total == scores[j]){
                rnk = rank[j];
            }
            else{
                rnk = rank[j] + 1;
            }
        }
        cout << rnk << endl;
    }
    
    
    return 0;
}
