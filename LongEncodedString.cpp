// All test cases passed.

int getCount(string s, int& i){
    string ans = "";
    
    while(i < s.size() && s[i] != ')'){
        ans = ans + s[i];
        i++;
    }
    
    return stoi(ans);
}

vector < int > frequency(string s) {
    vector<int> ans(26, 0);
    
    int i = 0, n = s.size();
    
    while(i < n){
        if(i+2 < n && s[i+2] == '#'){
            int num = stoi(to_string(s[i] - '0') + to_string(s[i+1] - '0')), count = 0;
            if(i+3 < n && s[i+3] == '('){
                i = i + 4;
                count = getCount(s, i);
                i++;
            }
            else{
                count = 1;
                i = i + 3;
            }
            ans[num-1] = ans[num-1] + count; 
        }
        else if(i+1 < n && s[i+1] == '('){
            int num = s[i] - '0', count = 0;
            i = i + 2;
            count = getCount(s, i);
            ans[num-1] = ans[num-1] + count;
            i++;
        }
        else{
            int num = s[i] - '0';
            ans[num-1] = ans[num-1] + 1;
            i++;
        }
    }
    
    return ans;
}
