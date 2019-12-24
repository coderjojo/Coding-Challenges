//bruteForce: O(n2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> v;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if((nums[i] + nums[j]) == target){
                  v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
       
        }
        return v;
        
    }
};

/*
a == b
a > b
a < b */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp;
        vector<int> V;
        
        for (int i=0; i<nums.size(); i++) {
            if ( mp.find(target - nums[i]) == mp.end() ) 
                //if not add to map 
                mp[nums[i]] = i;
            
            else{
                //else add index to vector 
                V.push_back(mp[target - nums[i]]);
                V.push_back(i);
            }
        }
        return V;
    }
};

//Optimized O(nlogn)
