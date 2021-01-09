#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string str;
    for(int count_str = 1; count_str <=n; count_str++){
        cin>>str;
        
        for(int i=0; i<str.length(); i++){
            if(i%2==0){
                cout<<str[i];
            }
        }
        
        cout<<" ";

        for(int i=0; i<str.length(); i++){
            if(i%2!=0){
                cout<<str[i];
            }
        }
        
        cout<<endl;
    }   
    return 0;
}
