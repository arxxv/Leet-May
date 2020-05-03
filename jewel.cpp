int numJewelsInStones(string J, string S) {
        int m=J.length();
        int count=0,i,j;
        int n =S.length();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(J[i]==S[j])
                {
                    count++;    
                }
            }
        }
        return count;
        
    }
