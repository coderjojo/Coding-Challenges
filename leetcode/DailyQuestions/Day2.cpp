class Solution {

public:
    
    int rev(int n){
        int sum = 0;
        
        while(n){
            int val = n % 10;
            n /= 10;
            sum += val * val;
        }
        
        return sum;
    }
    
    
    bool isHappy(int n) {
        
        unordered_set<int> nums;
        while(1){
            
            if(n == 1)
                return true;
            
            n = rev(n);
            
            if(nums.count(n) == 1)
                return false;
            
            nums.insert(n);
            
        }
        
    }
};

