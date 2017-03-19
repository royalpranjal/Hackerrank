#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct item{
    int index;
    int value;
};

struct fun{
    bool operator()(item& a, item& b){
        if(a.value < b.value){
            return true;
        }
        else if(a.value == b.value){
            if(a.index < b.index){
                return true;
            }
        }
        return false;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;
    cin >> n;

    vector<item> ans(n);

    for(int i = 0; i < n; i++){
        int n1, n2;
        cin >> n1 >> n2;

        ans[i].index = i+1;
        ans[i].value = n1+n2;
    }

    sort(ans.begin(), ans.end(), fun());

    for(int i = 0; i < n; i++){
        cout << ans[i].index << " "; 
    }

    cout << endl;
    
    return 0;
}
