#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q, num, val;
    string key;
    cin>>Q;
    
    map<string, int> m;
    for(int i=0; i<Q; i++){
        cin>>num;
        if(num == 1){
            cin>>key>>val;
            m[key] = m[key] + val;
        }
        
        else if(num ==2){
            cin>>key;
            m.erase(key);
        }
        
        else if(num ==3){
            cin>>key;
            map<string, int> :: iterator i = m.find(key);
            if(i != m.end()){
                cout<<m[key]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    
    return 0;
}