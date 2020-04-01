//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.

class Solution {
public:
    int reverse(int x) {
        int rev = 0, of;
        while(x){
            of = x % 10;
            x = x/10;
           
            /*
            Integer.MAX_VALUE = 2147483647(end with 7)
            Integer.MIN_VALUE = -2147483648(end with -8 )*/
            
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && of > 7 )) return 0;
             if (rev < INT_MIN/10 || (rev == INT_MIN/10 && of < -8 )) return 0;
            rev = rev * 10 + of;
        }
        return rev;
    }
};