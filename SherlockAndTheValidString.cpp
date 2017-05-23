#include <bits/stdc++.h>

using namespace std;

string isValid(string s){
    // Complete this function
    map<char, int> m;
    
    int n = s.size();
    
    for(int i = 0; i < n; i++){
        if(m.find(s[i]) == m.end()){
            m[s[i]] = 1;
        }
        else{
            m[s[i]]++;
        }
    }
    
    map<char, int> :: iterator it = m.begin();
    
    int first = -1, second = -1, firstCount = 0, secondCount = 0;
    
    while(it != m.end()){
        //cout << it->first << " " << it->second << endl; 
        if(first == -1){
            first = it->second;
            firstCount++;
        }
        else if(it->second == first){
            firstCount++;
        }
        else if(second == -1){
            second = it->second;
            secondCount++;
        }
        else if(it->second == second){
            secondCount++;
        }
        else{
            return "NO";
        }
        
        it++;
    }
    
    /*
    cout << endl;
    cout << "First : " << first << " ,Second : " << second << " ,firstCount" << firstCount << " ,secondCount" << secondCount;
    cout << endl;
    */
    
    if(first == -1 || second == -1){
        return "YES";
    }
      
    if(abs(first - second) == 1){
        if(firstCount == 1 || secondCount == 1){
            return "YES";
        }
    }
    
    
    if(second == 1 && secondCount == 1){
        return "YES";
    }
    
    return "NO";
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}
