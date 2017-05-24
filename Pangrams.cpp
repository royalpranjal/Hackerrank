#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin, s);
    
    vector<bool> temp(26, false);
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            temp[s[i]-'A'] = true;
        }
        else if(s[i] >= 97 && s[i] <= 122){
            temp[s[i]-'a'] = true;
        }
    }
    
    bool ans = true;
    
    for(int i = 0; i < 26; i++){
        if(!temp[i]){
            ans = false;
            break;
        }
    }
        
    if(!ans){
        cout << "not pangram" << endl;
    }
    else{
        cout << "pangram" << endl;
    }
       
    return 0;
}
