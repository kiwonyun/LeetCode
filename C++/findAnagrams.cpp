class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        vector<int> map(26,0);
        for(int i = 0; i < p.length(); i++)
            map[ p[i] - 'a' ]++;
        
        int n_unmatched = p.length();
        int left, right = 0;
        
        // Idea: using two pointers, check only two characters:
        // the newly added character indicated by the right pointer
        // and the deteleted character indicated by the left pointer
        while( right < s.length() ){
            if( map[ s[right++] - 'a' ]-- > 0 ) n_unmatched--;
            if( right > p.length() && map[ s[left++] - 'a' ]++ >= 0 ) n_unmatched++;
            if( n_unmatched == 0 ) res.push_back(left);
        }
        
        return res;
    }
};