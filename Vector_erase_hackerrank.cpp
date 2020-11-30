#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> vec1;
    int N;
    cin>>N;

    //Adding elements to vector
    for(long long i=0; i<N; i++){
        int e;
        cin>>e;
        vec1.push_back(e);
    }  
    //Taking input to remove the nth element
    int nth;
    cin>>nth;
    vec1.erase(vec1.begin()+nth-1);

    //Removing elements of range
    int rmv_bgn, rmv_end;
    cin>>rmv_bgn>>rmv_end;
    vec1.erase(vec1.begin()+rmv_bgn-1, vec1.begin()+rmv_end-1);
        
    //printing output
    cout<<vec1.size()<<endl;
    for(int i = 0; i < vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }

    return 0;
    
}
