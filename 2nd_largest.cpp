/* 
Given an array of elements. Your task is to find the second maximum element in the array.

Example 1:

Input:
N=5
arr[] = { 2, 4, 5, 6, 7 }
Output:  6
Explanation:
The largest element is 7 and 
the second largest element is 6.
*/


Solution:
class Solution
{
   public:
    int print2largest(int arr[], int arr_size)
    {
    	//code here.
    	int res=-1, largest=0;
    	for(int i=0;i<arr_size;i++){
    	    if(arr[i]>arr[largest]){
    	        res=largest;
    	        largest=i;
    	    }
    	    else if(arr[i]!=arr[largest]){
    	        if(res==-1 || arr[i]>arr[res])
    	            res=i;
    	    }
    	}
    	if(res>-1)
    	    return arr[res];
    	else
    	    return -1;
    }

};

