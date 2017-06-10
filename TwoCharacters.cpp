#include <bits/stdc++.h>

using namespace std;

string make(string s, char c, char d){
    string ans = "";
    
    for(int i = 0; i < s.size(); i++){
        if((s[i] == c) || (s[i] == d)){
            ans = ans + s[i];
        }
    }
    
    return ans;
}

bool isValid(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            return false;
        }
    }
    
    return true;
}

int maxLen(string s){
    // Complete this function
    map<char, bool> m;
    
    int i = 0, n = s.size(), ans = 0;
    
    while(i < n){
        m[s[i]] = true;
        i++;
    }
    
    map<char, bool> :: iterator it = m.begin();
    
    while(it != m.end()){
        map<char, bool> :: iterator itt = it;
        itt++;
        while(itt != m.end()){
            string str = make(s, it->first, itt->first);
            if(isValid(str)){
                int len = str.size();
                ans = max(ans, len);
            }
            itt++;
        }
        it++;
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = maxLen(s);
    cout << result << endl;
    return 0;
}
