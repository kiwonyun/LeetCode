class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
	    unordered_map<int,int> map;
	    for(int i = 0; i < nums.size(); i++){
	        map[target - nums[i]] = i;
	    }
	    
	    unordered_map<int,int>::iterator it;
	    int idx;
	    for(idx = 0; idx < nums.size(); idx++){
	        it = map.find(nums[idx]);
	        if( it != map.end() ){
	            if(idx == it->second) continue;
	            else break;
	        }
	    }
	    
	    vector<int> res = {idx, it->second};
	    return res;
	}
};