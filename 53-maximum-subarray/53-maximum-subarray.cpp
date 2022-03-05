class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      if(nums.size() == 0) return 0;
        
        int min_num = INT_MAX;
        int max_num = INT_MIN;
        
        int curAns = 0;
        int maxAns = INT_MIN;
        
        for(int i = 0; i < nums.size(); ++i){
             curAns += nums[i];
            if(curAns > maxAns){
               maxAns = curAns;
            }
            if(curAns < 0){
                curAns = 0;
            }
            
            if(nums[i] < min_num)
                min_num = nums[i];
            if(nums[i] > max_num)
                max_num = nums[i];
        }
        
        if(max_num < 0)
            return max_num;
        else
            return maxAns;
        
    }
};