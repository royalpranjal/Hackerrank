// 7/11 test cases passed

void check(int a, int b, string s, int& ans, map<int, bool> m){
    int n = stoi(s), len = s.size();
    
    if((n >= a) && (n <= b)){
        ans++;
    }
    else if(n > b){
        return;
    }
    
    for(int i = 0; i <= 9; i++){
        if(m.find(i) == m.end()){
            m[i] = true;
            check(a, b, s + to_string(i), ans, m);
        }
    }
}

bool check(string s){
    map<int, bool> m;
    
    for(int i = 0; i < s.size(); i++){
        if(m.find(s[i] - '0') == m.end()){
            m[s[i] - '0'] = true;
        }
        else{
            return false;
        }
    }
    
    return true;
}

void countNumbers(vector < vector < int > > arr) {
    int rows = arr.size();
    
    for(int i = 0; i < rows; i++){
        int a = arr[i][0], b = arr[i][1], ans = 0;
        
        /*
        for(int i = 1; i <= 9; i++){
            map<int, bool> m;
            m[i] = true;
            check(a, b, to_string(i), ans, m);
        }
        */
        
        for(int i = a; i <= b; i++){
            if(check(to_string(i))){
                ans++;
            }
        }
        
        cout << ans << endl;
    }
}
