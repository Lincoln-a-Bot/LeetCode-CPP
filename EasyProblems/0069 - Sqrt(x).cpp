class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1)
        {
            return x;
        }
        int l = 1;
        int r = x / 2;
        int result = 0;
        
        while (l <= r) 
        {
            int m = l + (r - l) / 2;           
            
            if (m <= x / m) 
            {  
                result = m;      
                l = m + 1;    
            } else {
                r = m - 1;   
            }
        }
        
        return result;
    }
};
