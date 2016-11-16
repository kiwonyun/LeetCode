class Solution {
public:
    // the problem is similar as subset-sum problem (DP)
    bool canPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        // the target subset-sum is the half of the sum of all values
        int sum = 0;
        for(int i : nums)
            sum += i;
            
        if( sum % 2 != 0 ) return false;
        int target = sum / 2;
        
        // fill a subset-sum table (it is able to be done with an one-row array)
        vector<bool> subset_sum(target+1);
        for(int i = 0; i < nums.size(); i++){
            for(int j = target; j >= 0; j--){
                if( j == 0 ) 
                    subset_sum[j] = true;
                else{
                    if( nums[i] == j )
                        subset_sum[j] = true;
                    else if( i > 0 ){
                        int k = j - nums[i];
                        if( k >= 0 && subset_sum[k] )
                            subset_sum[j] = true;
                    }
                }
            }
        }
        
        return subset_sum[target];
    }
};