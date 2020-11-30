#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    
    //Wrong way of adding elements into vector when vector is defined as:
    // vector<int> vec1;
    //for(int i = 0; i<N; i++){
    //    cin>>vec1[i];
    //}
        
    //Correct way of adding elements into vector when vector is defined as:
    // vector<int> vec1(N, 0);
    // for(int i=o; i<N; i++){
    //    cin>>vec1[i];
    // }

    //Another correct way of adding elements into vector
    vector<int> vec1;

    for(int i = 0; i<N; i++){
        int x;
        cin>>x;
        vec1.push_back(x);
    }
    
    
    //Sorting
    sort(vec1.begin(), vec1.end());
    
    //iterating through a vector (* is compulsory to access value because iterator is of pointer type variable.)
    for(vector<int>::iterator i= vec1.begin(); i<vec1.end(); i++){
        cout<<*i<<" ";
    }

    //Another way of printing a vector.
    //for(int i = 0; i<vec1.size(); i++){
    //    cout<<vec1[i]<<" ";
    //}

    return 0;
}
