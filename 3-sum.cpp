
inti  Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int n=A.size(),res=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=A[i]+A[j]+A[k];
            int diff=abs(B-sum);
            if(diff==0)
            return sum;
            else if(diff<min){
                min=diff;
                res=sum;
            }
            if(sum<=B)
            j++;
            else
            k--;
        }
    }
    return res;
}