/*
Problem: Count Set Bits
##########################
Given a positive integer N, print count of set bits in it. 

Example 1:

Input:
N = 6
Output:
2
Explanation:
Binary representation is '110' 
So the count of the set bit is 2.
Example 2:

Input:
8
Output:
1
Explanation:
Binary representation is '1000' 
So the count of the set bit is 1.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function setBits() which takes an Integer N and returns the count of number of set bits.

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 109
*/

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int setBits(int N)
    {
        // Write Your Code here
        int rem, count_set_bit=0;
        vector<int> binary;     //For storing the remainders or binary numbers
        while(N!=0){
            rem = N % 2;
            binary.push_back(rem);
            N = N/2;
        }
        
        for(int i=0; i<binary.size(); i++)
            if(binary[i] == 1)
                count_set_bit++;
        return count_set_bit;
    }
};

int main()
{
    int N;
    cin >> N;
    
    Solution object;
    int cnt = object.setBits(N);
    cout << cnt << endl;
    return 0;
}