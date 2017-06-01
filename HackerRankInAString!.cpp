#include <bits/stdc++.h>

using namespace std;

string check(string s){
    string a = "hackerrank";
    
    int i = 0, j = 0, n = s.size(), m = a.size();
    
    while(i < n && j < m){
        if(s[i] == a[j]){
            j++;
        }
        i++;
    }
    
    if(j == m){
        return "YES";
    }
    
    return "NO";
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        
        cout << check(s) << endl;
    }
    return 0;
}
