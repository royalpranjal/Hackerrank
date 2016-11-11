#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct Node{
    Node* next[26];
    bool leaf;
    int total;
    Node(){
        for(int i = 0; i < 26; i++){
            next[i] = NULL;
        }
        leaf = false;
        total = 0;
    }
};

Node* head = new Node();

void add(string s){
    int n = s.size(), i = 0;
    
    Node* curr = head;
    
    while(i < n){
        int a = s[i] - 97;
        if(curr->next[a] == NULL){
            Node* temp = new Node();
            curr->next[a] = temp;
        }
        curr = curr->next[a];
        curr->total = curr->total + 1;
        i++;
    }
    
    curr->leaf = true;
}

int find(string s){
    int n = s.size(), i = 0;
    
    Node* curr = head;
    
    while(i < n){
        int a = s[i] - 97;
        if(curr->next[a] == NULL){
            return 0;
        }
        curr = curr->next[a];
        i++;
    }
    
    if(curr == NULL){
        return 0;
    }
    
    return curr->total;
}

int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op == "add"){
            add(contact);
        }
        else if(op == "find"){
            cout << find(contact) << endl;
        }
    }
    return 0;
}
