class Solution {
  public:
    int maxSubArray(vector<int>& nums) {
            
            int ans = INT_MIN, t = 0;
            
            for(int x : nums){
                        t+= x;
                        ans = max(ans,t);
                        
                        t= max(t,0);
                    }
            
            return ans;
            
        }
};
