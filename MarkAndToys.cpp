#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0;
    
    // Write the code for computing the final answer using n,k,prices
    sort(prices.begin(), prices.end());
    
    int i = 0;
    
    while(i < n){
        if(k < prices[i]){
            break;    
        }
        k = k - prices[i];
        answer++;
        i++;
    }
    
    cout << answer << endl;
    
    return 0;
}
