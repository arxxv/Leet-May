class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        int n=A.size();
        int ans=A[0],sum=A[0];
        int total=A[0];
        for(int i=1;i<n;i++)
        {
            sum=max(A[i],sum+A[i]);
            total=total+A[i];
            if(sum>ans)
            {
                ans=sum;
            }
        }
        
       for(int i=0;i<n;i++)
       {
            A[i]= A[i]*(-1);
       }
        int rev=A[0],fin=A[0];
        for(int i=1;i<n;i++)
        {
            rev=max(A[i],rev+A[i]);
            if(rev>fin)
            {
                fin=rev;
            }
        }
        if(fin+total>ans && fin+total!=0)
        {
            return fin+total;
        }
        return ans;
    }
};
