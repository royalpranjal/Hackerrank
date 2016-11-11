#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    vector<int> temp(n);
    
    for(int i = 0; i < n; i++){
        cin >> temp[i];
    }
    
    vector<int> sol(n, 1);
    
    long long int ans = 0;
    
    for(int i = 0; i < n; i++){
        if(i == 0){
            if(i+1 < n && temp[i] > temp[i+1]){
                sol[i] = max(sol[i], sol[i+1] + 1);
            }
        }
        else if(i != n-1){
            if(temp[i] > temp[i+1]){
                sol[i] = max(sol[i], sol[i+1] + 1);
            }
            if(temp[i] > temp[i-1]){
                sol[i] = max(sol[i], sol[i-1] + 1);
            }
        }
    }
    
    for(int i = n-1; i >= 0; i--){
        if(i == n-1){
            if(i-1 >= 0 && temp[i] > temp[i-1]){
                sol[i] = max(sol[i], sol[i-1] + 1);
            }
        }
        else if(i != 0){
            if(temp[i] > temp[i+1]){
                sol[i] = max(sol[i], sol[i+1] + 1);
            }
            if(temp[i] > temp[i-1]){
                sol[i] = max(sol[i], sol[i-1] + 1);
            }
        }
        else{
            if(temp[i] > temp[i+1]){
                sol[i] = max(sol[i], sol[i+1] + 1);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        ans = ans + sol[i];
    }
    
    cout << ans << endl;
    
    return 0;
}
