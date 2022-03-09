class Solution {
public:
    int reverse(int x) {
        
        int min = INT_MIN;
        int max = INT_MAX;
        long long int res = 0;
    
        while(x != 0){
            res *= 10;
            res += x % 10;
            x /= 10;
            
        }
        
        if(res > max || res < min)
            res = 0;
        return res;
        
    
    }
};