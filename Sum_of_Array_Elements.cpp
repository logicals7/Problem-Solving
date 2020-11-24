/*
Problem-2: Sum of array Elements
#################################################
Given an integer array A of size N, find sum of elements in it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, print the sum of all elements of the array in separate line.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Ai <= 100

Example:
Input:
2
3
3 2 1
4
1 2 3 4
Output:
6
10
*/


#include <bits/stdc++.h>
using namespace std;

void InsertArrElements(int arr[], int size_of_arr){
    for(int i=0; i<size_of_arr; i++)
        cin>>arr[i];
}

 void SumArrElements(int arr[], int size_of_arr, int sum){
    for(int i=0; i<size_of_arr; i++)
        sum = sum + arr[i];
    cout<<sum<<endl;
}

int main() {
	//1st Line of input
	int count_test_cases;
	cin>>count_test_cases;
	
	for(int i=1; i<=count_test_cases; i++){
	    //2nd Line of input
	    int size_of_arr;
	    cin>>size_of_arr;
	    
	    //3rd Line of Input
	    int arr[size_of_arr];
	    InsertArrElements(arr, size_of_arr);
	    
	    //1st Line of Output
	    int sum=0;
	    SumArrElements(arr, size_of_arr, sum);
	}
	
	return 0;
}