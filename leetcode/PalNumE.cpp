//Runtime: 24 ms, faster than 19.92% of C++ online submissions for Palindrome Number.
//but int to string conversion is not suggested

#include<bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(int x) {
     string s = to_string(x);
     string str = s;
     reverse(str.begin(), str.end()); 
     
        if(s == str)
            return true;
        else
            return false;
     
    }
};