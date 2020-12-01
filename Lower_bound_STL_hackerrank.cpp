#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//lower_bound: 
//returns the index of the next smallest number just greater than or equal to that
//number. If there are multiple values that are equal to val, 
//lower_bound() returns the index of the first such value.
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q, val;
    cin>>N;
    
    vector<int> v(N);
    for(int i=0; i<N; i++)
        cin>>v[i];
    
    cin>>Q;
    //Output
    for(int i = 0; i < Q; i++){
        cin>>val;
        //defining a vector iterator
        vector<int> :: iterator low;
        low = lower_bound(v.begin(), v.end(), val);
        //How to find Lower_bound: (low - v.begin())
        if(v[low - v.begin()] == val)
            cout<<"Yes "<< (low - v.begin() + 1)<<endl;
        else
            cout<<"No "<< (low - v.begin() + 1)<<endl;
    }
    return 0;
}
