class Solution {
public:
    int findComplement(int num) {
        int sum=0;
 
 int digit[100],i=0,l=0;
        while(num!=0)
        {
            digit[i]=num%2;
            i++;
            num=num/2;
        }
        for(int j=0;j<i;j++)
        {
            digit[j]=1-digit[j];
            
        }
        for(int j=0;j<i;j++)
        {
            if(digit[j]==1)
            {
                sum=sum+pow(2,j);
                
            }
        }
        return sum;
        
    }
};
