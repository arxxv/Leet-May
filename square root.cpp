class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int l=0,h=num,mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(mid*mid==num)
            {
                return true;
            }
            if(mid*mid<num)
            {
                l=1+mid;
            }
            if(mid*mid>num)
            {
                h=mid-1;
            }
        }
        return false;
        
    }
};
