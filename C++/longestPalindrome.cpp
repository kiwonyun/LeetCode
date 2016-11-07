class Solution {
public:
    int longestPalindrome(string s) {
        int nLen = 0;
        unordered_map<char,int> alphabet;
        for(int i = 0; i < s.length(); i++){
            int index = s[i]-'a';
            if( alphabet[index] == 0 )
                alphabet[index]++;
            else{
                alphabet.erase(index);
                nLen += 2;
            }
        }
        
        return alphabet.empty() ? nLen : nLen + 1;
    }
};