class Solution {
  public:
    int singleNumber(vector<int>& nums) {
            int num = 0;
           
            for(int a:nums){
                        num ^= a;
                    }
            
            return num;
        }
};
