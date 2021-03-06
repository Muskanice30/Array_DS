/*
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2). 
*/

SOLUTION:
 public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        long long lsum=0;
        for(int i=0;i<n;i++){
            if(lsum==sum-a[i])
             return i+1;
            lsum+=a[i];
            sum=sum-a[i];
        }
        return -1;
    }
