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

struct st{
    int mag;
    int ran;
};

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    map<string, st> myMap;
    
    int i = 0, j = 0;
    
    while(i < magazine.size() || j < ransom.size()){
        if(i < magazine.size()){
            if(myMap.find(magazine[i]) != myMap.end()){
                myMap[magazine[i]].mag++;
            }
            else{
                myMap[magazine[i]].mag = 1;
            }
            i++;
        }
        if(j < ransom.size()){
            if(myMap.find(ransom[j]) != myMap.end()){
                myMap[ransom[j]].ran++;
            }
            else{
                myMap[ransom[j]].ran = 1;
            }
            j++;
        }
    }
    
    auto it = myMap.begin();
    
    while(it != myMap.end()){
        if((it->second).mag < (it->second).ran){
            return false;
        }
        it++;
    }
    
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
