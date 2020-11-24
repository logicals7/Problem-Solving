/*
Problem - 1: Sub Array with Given Sum
########################################
Given an unsorted array A of size N of non-negative integers, 
find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. 
Then T test cases follow. Each test case consists of two lines. 
The first line of each test case is N and S, where N is the size of array and S is the sum. 
The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) 
of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15

#######################################################################
2               T=2=Num of test cases
5 12            5=N=Size of array, 12=S=Sum
1 2 3 7 5       Elements of array

Logic: 

Take two loops. Iterate one from i = 0 to n. Iterate second loop to j=i+1 to n.
If sum==subarray_sum: print sum found.
1 2 3 7 5
Initial sum = arr[i]
1st Loop: i=0 to n
2nd Loop: i+1 to n
*/

#include<bits/stdc++.h>
using namespace std;

void InsertArrElements(int size_of_arr, int arr[]){
    for(int i=0; i<size_of_arr; i++){
        cin>>arr[i];
    }
}

int FindSumSubArr(int arr[], int size_of_arr, int sum){
    int sum_sub_arr;
    for(int i=0; i<size_of_arr; i++){ //1 2 3 7 5
        sum_sub_arr = arr[i];
        
        for(int j=i+1; j<=size_of_arr; j++){
            
            if(sum==sum_sub_arr){
                cout<<i+1<<" "<<j<<endl;
                return 0;
            }
            
            if(sum < sum_sub_arr || j==size_of_arr){
                break;
            }
            
            sum_sub_arr += arr[j];
        }
    }
    
    cout<<-1<<endl;
    return 0;
}

int main()
{
    //1st Line of Input
    int count_test_cases;
    cin>>count_test_cases;
    
    //Counting Test Cases
    for(int i=1; i<=count_test_cases; i++){
        
        //2nd Line of input
        int size_of_arr, sum;
        cin>>size_of_arr>>sum;

        //3rd Line of Input
        int arr[size_of_arr];
        InsertArrElements(size_of_arr, arr);
        FindSumSubArr(arr, size_of_arr, sum);
    }
    return 0;
}