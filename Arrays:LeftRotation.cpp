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

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    if(a.size() == 0){
        return a;
    }
    k = k%n;
    
    int rot = n-k, count = 0, i = 0, orig = a[0];
    
    if(k == rot){
        for(int j = 0; j < k; j++){
            int temp = a[n-k+j];
            a[n-k+j] = a[j];
            a[j] = temp;
        }
        return a;
    }
    
    while(count <= n){
        int temp = a[(i+rot)%n];
        a[(i+rot)%n] = orig;
        orig = temp;
        i = (i+rot)%n;
        count++;
    }
    return a;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
