class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Best solution: using bit manipulation (XOR)
        int res = 0;
        for( int i : nums )
            res ^= i;
        
        return res;
        
        /*
        // the second solution (slower): it needs to sort an array
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if( i % 2 == 0 )
                sum += nums[i];
            else
                sum -= nums[i];
        }
        
        return sum;
        */
    }
};