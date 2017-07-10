#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    cin >> n >> k;
    
    vector<int> temp(n);
    
    for(int i = 0; i < n; i++){
        cin >> temp[i];
    }
    
    int ans = 0, start = 0;
    
    for(int i = 0; i < n; i++){
        int pages = temp[i]/k;

        if(temp[i]%k){
            pages++;
        }
        
        int st = start + 1, end = start + pages;
        int t = st;
        int ques = 0, last = -k;
        
        while(t <= end){
            last = ques;
            if(t == end){
                if(temp[i]%k){
                    ques += temp[i]%k;
                }
                else{
                    ques += k;
                }
            }
            else{
                ques += k;                
            }

            for(int j = 0; j < k; j++){
                if((ques-j == t) && (ques-j > last)){
                    ans++;
                }
            }

            t++;
        }
        
        start = end;
    }
    
    cout << ans << endl;
    
    return 0;
}
