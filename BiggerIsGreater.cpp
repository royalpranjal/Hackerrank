#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getMin(vector<int> temp, int start, int key){
    int ans = 1000;
    
    for(int i = start; i < temp.size(); i++){
        if(temp[i] > key){
            if(ans != 1000){
                if(temp[i] < temp[ans]){
                    ans = i;
                }
            }
            else{
                ans = i;
            }
        }
    }
    
    return ans;
}

void swap(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int test;
    cin >> test;
    
    while(test){
        string s;
        cin >> s;
        
        int n = s.size(), count = 0, i;
        
        vector<int> temp(n);
        
        for(int i = 0; i < n; i++){
            temp[i] = s[i];
        }
        
        for(i = n-1; i > 0; i--){
            if(temp[i] > temp[i-1]){
                int index = getMin(temp, i, temp[i-1]);
                swap(temp[i-1], temp[index]);
                count++;
                break;
            }
        }
        
        if(count){
            sort(temp.begin()+i, temp.end());
            for(int i = 0; i < n; i++){
                char c = temp[i];
                cout << c;
            }
        }
        else{
            cout << "no answer";
        }
        
        cout << endl;
        
        test--;
    }
    
    return 0;
}
