class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0, start = 0;
        map<char,int> dict; // character, its position
        
        for(int i = 0; i < s.length(); i++ ){
            auto it = dict.find( s[i] );
            if( it != dict.end() ){
                if( it->second >= start )
                    start = it->second + 1;
            }
            longest = max(longest, i-start+1);
            dict[ s[i] ] = i;
        }
        
        
        return longest;
    }
};