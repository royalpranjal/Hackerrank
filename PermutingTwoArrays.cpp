#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test;
    cin >> test;
    
    while(test){
        int n, k;
        cin >> n >> k;
        
        vector<int> A(n), B(n);
        
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        
        for(int i = 0; i < n; i++){
            cin >> B[i];
        }
            
        string ans = "YES";
        
        for(int i = 0; i < n; i++){
            bool found = false;
            int index = -1;
            
            for(int j = 0; j < n; j++){
                if(B[j] != -1){
                    if((B[j] + A[i]) >= k){
                        if(index == -1){
                            index = j;
                        }
                        else{
                            if(B[j] < B[index]){
                                index = j;
                            }
                        }
                        found = true;
                    }
                }
            }
            
            if(!found){
                ans = "NO";
                break;
            }
            else{
                B[index] = -1;
            }
        }
        
        cout << ans << endl;
        
        test--;
    }
    
    return 0;
}
