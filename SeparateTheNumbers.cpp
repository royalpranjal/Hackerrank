#include <bits/stdc++.h>

using namespace std;

string get(string s, int start, int end){
    string ans = "";

    if(s[start] == '0'){
        return "-1";
    }
    
    for(int i = start; i <= end; i++){
        ans = ans + s[i];
    }
    
    return ans;
}

bool check(string s, int start, int end, string fnum){
    string toCheck = "";
    
    for(int i = start; i < end; i++){
        toCheck += s[i];
        if(toCheck[0] == '0'){
            return false;
        }
        if(stoll(toCheck) == (stoll(fnum) + 1)){
            fnum = toCheck;
            toCheck = "";
            if(i == end-1){
                return true;
            }
        }
        else if(stoll(toCheck) > (stoll(fnum) + 1)){
            return false;
        }
    }
    
    return false;
}

string check(string s){
    int i = 0, n = s.size();
    
    string ans = "NO";
    
    while(i < n/2){
        string fnum = get(s, 0, i);
        if(fnum != "-1"){
            if(check(s, i+1, n, fnum)){
                ans = "YES " + fnum;
                return ans;
            }
        }
        i++;
    }
    
    return ans;
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
