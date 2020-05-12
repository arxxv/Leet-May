class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>m1;
        for(int i : nums)
        {
            m1[i]++;
        }
        for(auto x:m1)
        {
            if(x.second==1)
            {
                return x.first;
            }
        }
        return 0;
    }
};
