#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string rev(string a){
    int n = a.size();
    
    for(int i = 0; i < n/2; i++){
        char t = a[n-i-1];
        a[n-i-1] = a[i];
        a[i] = t;
    }
    
    return a;
}

string multiply(string a, int b){
    string ans = "";
    
    a = rev(a);
    
    int carry = 0;
    
    for(int i = 0; i < a.size(); i++){
        int sum = carry + (a[i] - '0')*b;
        ans = ans + to_string(sum%10);
        carry = sum/10;
    }
    
    if(carry){
        ans = ans + to_string(carry);
    }
    
    return rev(ans);
}

string add(string a, string b){
    int n = a.size(), m = b.size(), carry = 0, i = 0;
    
    string ans = "";
    
    a = rev(a);
    b = rev(b);
    
    while(i < n && i < m){
        int sum = carry + a[i] - '0' + b[i] - '0';
        ans = ans + to_string(sum%10);
        carry = sum/10;
        i++;
    }
    
    while(i < n){
        int sum = carry + a[i] - '0';
        ans = ans + to_string(sum%10);
        carry = sum/10;
        i++;
    }
    
    while(i < m){
        int sum = carry + b[i] - '0';
        ans = ans + to_string(sum%10);
        carry = sum/10;
        i++;
    }
    
    if(carry){
        ans = ans + to_string(carry);
    }
    
    return rev(ans);
}

string mult(string a, string b){
    int n = a.size(), m = b.size(), i = 0, count = 0;
    
    string ans = "";
    
    b = rev(b);
    
    while(i < m){
        int temp = b[i] - '0';
        
        if(count){
            a = a + "0";
        }
        
        ans = add(ans, multiply(a, temp));
        
        count++;
        i++;
    }
    
    return ans;
}

int main(){
    int n;
    cin >> n;
    
    string ans = "1";
    
    while(n){
        ans = mult(ans, to_string(n));
        n--;
    }
    
    cout << ans;
    
    return 0;
}
