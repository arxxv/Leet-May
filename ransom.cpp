int m = ransomNote.length();
        int n = magazine.length();
        int x;
        int a[26]={0},i,j;
        for(i=0;i<n;i++)
        {
            a[magazine[i]-97]++;
        }
        for(i=0;i<m;i++)
        {
           if( (--a[ransomNote[i]-97]) <0)
            
            
                return false;
            
            
        }
        
            return true;
