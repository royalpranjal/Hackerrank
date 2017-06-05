#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string get(string s, bool& done){
    string ans = "";
    
    int i = 0, n = s.size(), total = 0;
    
    while(i < n){
        char c = s[i];
        
        int count = 1;
        
        while((s[i] == s[i+1]) && (i+1 < n)){
            total = 1;
            count++;
            i++;
        }
        
        //cout << count << endl;
        
        if(count%2 != 0){
            ans = ans + c;  
        }
        
        i++;
    }
    
    if(total == 0){
        done = true;
    }
    
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin >> s;
    
    string ans = "";
    
    bool done = false;
    
    while(!done){
        ans = get(s, done);
//        cout << ans << endl;
        s = ans;
    }
    
    if(ans.size() == 0){
        ans = "Empty String";
    }
    
    cout << ans;
    
    return 0;
}
