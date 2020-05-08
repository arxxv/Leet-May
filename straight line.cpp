class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        sort(coordinates.begin(),coordinates.end());
        int m=coordinates.size();
        int x,count=0,z,flag=0;
        if(m==2)
        {
            return true;
        }
        vector<int>v;
        vector<int>p;
        
            for(int i=0;i<m-1;i++)
            {
                
                    x = abs(coordinates[i][0] -coordinates[i+1][0]);
                     v.push_back(x);     
                
            }
        
            for(int j=0;j<m-1;j++)
            {
                    z =abs(coordinates[j][1]-coordinates[j+1][1]);
                    p.push_back(z);
            }
        int s1=v.size();
        int s2=p.size();
        
            for(int i=0;i<s1;i++)
            {
                if(v[i]!=0)
                {
                    flag++;
                }
            }
        if(flag==0)
        {
            return true;
        }
        else
        {
            for(int i=1;i<s1;i++)
            {
                if(v[i]!=0 && v[i-1]!=0)
                {
                    if(p[i]/v[i]!=p[i-1]/v[i-1])
                    {
                        count++;
                    }
                }
            }
            if(count>0)
            {
                return false;
            }
            return true;
        }
    }
    
};
