/*
Problem-3: Search an Element in an array.
#########################################
Given an integer array and another integer element. 
The task is to find if the given element is present in array or not.

Example 1:

Input:
N = 4
Arr[] = {1,2,3,4}
X = 3
Output: 2
Explanation: There is one test case 
with array as {1, 2, 3 4} and element 
to be searched as 3.  Since 3 is 
present at index 2, output is 2.
Example 2:

Input:
N = 5
Arr[] = {1,2,3,4,5}
X = 5
Output: 4
Explanation: For array elements 
{1,2,3,4,5} element to be searched 
is 5 and it is at index 4. So, the 
output is 4.
Your Task:
The task is to complete the function search() which takes the array arr[], 
its size N and the element X as inputs and returns the index of first occurrence of X in the given array. 
If the element X does not exist in the array, the function should return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1). 

Constraints:
1 <= N <= 100
1 <= Arr[i] <= 100
1 <= X <= 100
*/

#include<bits/stdc++.h>
using namespace std;

// Function to search x in arr
// arr: input array
// X: element to be searched for
int search(int arr[], int N, int X)
{
    for(int i=0; i<N; i++)
        if(arr[i] == X)
            return i;
    return -1;
}

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
            cin>>arr[i];
        cin>>x;
        cout<<search(arr,sizeOfArray,x)<<endl; //Linear search
    }
    return 0;   
}