//Problem Statement: https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Q, query_num, e;
    cin>>Q;
    
    set<int> s;
    
    for(int i = 0; i < Q; i++){
        cin>>query_num>>e;
        if(query_num == 1){
            s.insert(e);
        }
        
        else if(query_num == 2){
            s.erase(e);
        }
        
        else if(query_num ==3){
            set<int> :: iterator i;
            i = s.find(e);
            if(i == s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }  
    return 0;
}



