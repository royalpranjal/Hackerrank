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
    int first;
    int second;
};

int number_needed(string a, string b) {
    map<char, st> myMap;
    
    int i = 0, j = 0;
    
    while(i < a.size() || j < b.size()){
        if(i < a.size()){
            if(myMap.find(a[i]) != myMap.end()){
                myMap[a[i]].first++;
            }
            else{
                myMap[a[i]].first = 1;
            }
        }
        if(j < b.size()){
            if(myMap.find(b[j]) != myMap.end()){
                myMap[b[j]].second++;
            }
            else{
                myMap[b[j]].second = 1;
            }
        }
        i++;
        j++;
    }
    
    auto it = myMap.begin();
    
    int sol = 0;
    
    while(it != myMap.end()){
        sol = sol + abs((it->second).first - (it->second).second);
        it++;    
    }
    
    return sol;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
