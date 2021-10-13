/*  https://www.interviewbit.com/problems/rain-water-trapped/  */

int Solution::trap(const vector<int> &A) {
    int n=A.size();
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=A[0];
    for(int i=1;i<n;i++){
        lmax[i]=max(A[i],lmax[i-1]); 
    }
    rmax[n-1]=A[n-1];
    for(int j=n-2;j>=0;j--){
        rmax[j]=max(A[j],rmax[j+1]);
    }
    for(int i=1;i<n-1;i++){
        res=res+(min(lmax[i],rmax[i])-A[i]);
    }
    return res;
}
