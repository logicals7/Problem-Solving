//Problem Statement: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

/*
Explaining Input:

1st Line: 2 2
Here we are storing n(number of variable length arrays)=2 & q(no. of queries)=2.

#######################
2nd Line: 3 1 5 4
This is an array of variable length. (n = 1)
3 = size of array
1 5 4 = elements of array

######################
3rd Line: 5 1 2 8 9 3
This is another array of variable length. (n = 2)
where 5 = size of array
1 2 8 9 3 = elements of array.

######################
4th Line(q = 1): 0 1
i(index of array a)=0 and  j(index of subarray in a[])=1 for a query.
Means we have to return the element as a[0][1] = 5 

######################
5th Line(q = 2): 1 3
We have to return an element a[1][3] = 9
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //Taking input of the values of n & q.
    //n = number of variable length arrays
    //q = number of queries
    int n, q;
    cin>>n>>q;  
    
    //Declaring a 2D array
    vector<vector<int>> main_arr;
  
    //Creating the outline of main_arr. where n is number of mini_arrays in main_arr
    for(int i = 0; i<n; i++)
    {
        vector<int> mini_arr;       //Declaring a mini-array which is inside main_arr
        int mini_arr_size;          //declaring Size of mini-arr
        cin>>mini_arr_size;
        
        //Storing elements in mini_arr
        for(int j = 0; j < mini_arr_size; j++)
        {
            int element;
            cin>>element;
            mini_arr.push_back(element);    //Pushing each element of mini_arr at end.
        }
        
        //Pushing mini_arr at the end of main_arr
        main_arr.push_back(mini_arr);
    }
    
    //For Queries    
    for(int i = 0; i < q; i++)
    {
        //Accessing the index of 2D array as main_arr[][]
        int which_mini_arr, which_index_mini_arr;
        cin>>which_mini_arr>>which_index_mini_arr;
        cout<<main_arr[which_mini_arr][which_index_mini_arr]<<endl;
    }

    return 0;
}
