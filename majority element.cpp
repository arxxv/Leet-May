class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int m=nums.size();
        map<int,int> m1;
        for(int a:nums)
        {
            m1[a]++;
        }
        for(int b:nums)
        {
            if(m1[b]>m/2)
            {
                return b;
            }
        }
        return 0;
    }
};
