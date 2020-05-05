class Solution {
public:
    int firstUniqChar(string s) {
        
         map<char,int> cnt;
    
    for(char c:s)
    {
        cnt[c]++;
    }
    int i=0;
    for(char c:s)
    {
        if(cnt[c]==1)
        {
            return i;
        }
        i++;
    }
        return -1;
    
        
    }
};
